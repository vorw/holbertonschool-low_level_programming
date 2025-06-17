#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	
	new_node->str = strdup(str);
	
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	
	new_node->len = len;
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;

	return (new_node);
}
