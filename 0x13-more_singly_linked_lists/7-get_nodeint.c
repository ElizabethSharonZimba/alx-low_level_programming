#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of the list
 * @head: head of the list
 * @index: The index of the node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iterator;

if (head == NULL)
return (NULL);

for (iterator = 0; head != NULL; iterator++)
{
if (iterator == index)
return (head);
else
head = head->next;
}

return (NULL);

}
