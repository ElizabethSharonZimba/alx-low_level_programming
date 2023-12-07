#include "lists.h"

/**
 * dlistint_len - returns the number of elements in dlistint_t list
 * @head: pointer to the head
 * Return: num of nodes
 **/
size_t dlistint_len(const dlistint_t *head)
{
	const dlistint_t *current_node = head;
	size_t node_count = 0;

	while (current_node != NULL)
	{
		node_count++;
		current_node = current_node->next;
	}
	return (node_count);
}
