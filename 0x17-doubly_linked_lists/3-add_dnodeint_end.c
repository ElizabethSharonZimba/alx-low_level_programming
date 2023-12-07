#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the first  list
 * @n: int
 * Return: NULL
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (current_node)
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		new_node->prev = current_node;
		current_node->next = new_node;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	return (new_node);
}
