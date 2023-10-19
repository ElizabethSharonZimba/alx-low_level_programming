#include "lists.h"
/**
 * free_listint_safe - list safe version
 * @h: head of list
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0, j;
	listint_t *tmp, *check, *copy = *h;

	while (*h)
	{
		i++;
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		check = copy;
		j = 0;
		while (j < i)
		{
			if (*h == check)
			{
				*h = NULL;
				return (i);
			}
			check = check->next;
			j++;
		}
	}
	return (i);
}
