#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: head of node
 * @idx: index
 * @n: data to be added
 * 
 * Return: the address of the new node otherwise NULL 
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *newNode, *tmp;
unsigned int i = 0;

if (head == NULL)
return (NULL);
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}
tmp = *head;
while (tmp != NULL)
{
if (i == idx - 1)
{
newNode->next = tmp->next;
tmp->next = newNode;
return (newNode);
}
tmp = tmp->next;
i++;
}
return (NULL);
}