#include "lists.h"

/**
 * add_nodeint - new node to be added a list
 *
 * @head: pointer  to the  head pointer
 * @n: data
 * Description: singly linked list node structure
 * Return: address to the new element otherwise, NULL
 *
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;

newNode->next = *head;

*head = newNode;

return (newNode);
}
