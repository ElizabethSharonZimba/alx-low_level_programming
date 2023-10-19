#include "lists.h"
/**
 * list_len - num of element in the list
 * @h: linked list
 * Return: num of element in list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
