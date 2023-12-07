#include "lists.h"

/**
 * get_dnodeint_at_index - returns the  dlistint_t
 * @head: pointer to the list
 * @index: nth
 * Return: NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
