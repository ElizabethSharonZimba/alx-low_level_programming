#include "lists.h"
/**
 * pop_listint - remove the head node
 * @head: pointer of head
 * Return: n
 **/
int pop_listint(listint_t **head)
{
int n = 0;
listint_t *tmp;

if (*head == NULL)
return (0);

tmp = *head;

n = tmp->n;
*head = tmp->next;
tmp->n = '\0';
free(tmp);

return (n);
}
