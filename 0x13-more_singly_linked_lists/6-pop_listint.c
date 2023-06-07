#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 *  @head: pointer to head node
 *
 * Return: 0 if list is empty
*/

int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;

if (*head == NULL)
return (0);

tmp = *head;
n = tmp->n;
*head = tmp->next;
free(tmp);

return (n);
}
