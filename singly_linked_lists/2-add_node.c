#include "lists.h"

/**
 * add_node - Prints all elements of list_t
 * @head: current head of list
 * @str: string to add to list
 * Return: Returns the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;

	node = malloc(sizeof(list_t));
	if (node)
	{
		node->str = strdup((char *)str);
		node->len = 0;
		while (str[node->len])
			node->len++;
		node->next = *head;
		*head = node;
	}
	return (node);
}
