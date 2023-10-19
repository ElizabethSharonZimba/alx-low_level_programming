#include "lists.h"
/**
* listint_len - calculate list lenght
* @h: pointer head
* Return: lenght
**/
size_t listint_len(const listint_t *h)
{
size_t lenght = 0;

while (h != NULL)
{lenght++;
h = h->next;
}
return (lenght);
}
