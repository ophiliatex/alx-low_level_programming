#include "lists.h"

/**
 * int delete_nodeint_at_index - deletes the node at index 
 * index of a listint_t linked list
 * @head: head node
 * @index: index where node should be deleted
 * 
 * Return: 1 (success) -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head, *tmp2;
unsigned int i = 1;

if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
*head = tmp->next;
free(tmp);
return (1);
}
while (tmp)
{
if (i == index)
{
tmp2 = tmp->next;
tmp->next = tmp2->next;
free(tmp2);
return (1);
}
tmp = tmp->next;
i++;
}
return (-1);
}