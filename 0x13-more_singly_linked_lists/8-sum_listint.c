#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data of the list
 * @head: head of list
 * Return: 0  else sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
