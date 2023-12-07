#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the dlistint_t
 * @head: pointer to the list
 * Return: sum of all data else 0
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
