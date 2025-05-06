hellllloooo
#include "main.h"

/**
* more_numbers - repeats printing the number from 0 to 14
*/

void more_numbers(void)
{
        int i;
        int j;

        for (i = 0; i <= 9; i++)
        {
                int check = 0;

                for (j = 0; j <= 9;j++)
                {
                        if (check == 1)
                        {
                                if (j > 4)
                                {
                                        break;
                                }
                                _putchar(49);
                        }
                        _putchar(j + '0');
                        if (j == 9)
                        {
                                j = 0;
                                check = 1;
                        }
                }
                _putchar('\n');
        }
}
