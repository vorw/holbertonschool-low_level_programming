#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int f_from, f_to, r, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(1, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(1, "Error: Can't write to %s\n", argv[2]);
		close(f_from);
		exit(99);
	}

	while ((r = read(f_from, buf, 1024)) > 0)
	{
		w = write(f_to, buf, r);
		if (w != r)
		{
			dprintf(1, "Error: Can't write to %s\n", argv[2]);
			close(f_from);
			close(f_to);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", argv[1]);
		close(f_from);
		close(f_to);
		exit(98);
	}

	if (close(f_from) == -1)
	{
		dprintf(1, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}

	if (close(f_to) == -1)
	{
		dprintf(1, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}

	return (0);
}
