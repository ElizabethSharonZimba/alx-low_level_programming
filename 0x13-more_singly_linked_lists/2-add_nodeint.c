#include "lists.h"
/**
* add_nodeint - add a node at the start of list
* @head: pointer to head
* @n: val int
* Return:new node
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = NULL;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
