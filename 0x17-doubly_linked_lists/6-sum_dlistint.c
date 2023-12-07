include "lists.h"

/**
 * sum_dlistint - returns the sum of all the dlistint_t
 * @head: pointer to the list
 * Return: sum of all data else 0
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
