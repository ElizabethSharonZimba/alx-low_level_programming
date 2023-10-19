#include "lists.h"
/**
* free_listint - frees a list of int
* @head: pointer to head
* Return: void
**/
void free_listint(listint_t *head)
{
listint_t *tmp = NULL;

if (head == NULL)
return;

while (head->next != NULL)
{
tmp = head;
head = head->next;
tmp->n = '\0';
free(tmp);
}
free(head);

}
