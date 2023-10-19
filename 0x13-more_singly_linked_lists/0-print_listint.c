#include "lists.h"
/**
* print_listint - list of int
* @h: pointer to node
* Return: lenght
**/
size_t print_listint(const listint_t *h)
{
size_t lenght = 0;
while (h != NULL)
i
{
printf("%d\n", h->n);
lenght++;
h = h->next;
}
return (lenght);
}
