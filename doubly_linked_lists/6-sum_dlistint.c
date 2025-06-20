#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all data (n) of a dlistint_t linked list
 * @head: head
 * Return: the sum of all data, if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
