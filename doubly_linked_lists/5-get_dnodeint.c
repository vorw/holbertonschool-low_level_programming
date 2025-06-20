#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head
 * @index: the index of the node, starting from 0
 * Return: the chosen node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
