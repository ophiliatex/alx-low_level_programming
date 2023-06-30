#include "lists.h"

/**
 * add_nodeint_end - new node to be added a list
 *
 * @head: pointer  to the  head pointer
 * @n: data
 * Description: singly linked list node structure
 *
 * Return: address to the new element otherwise, NULL
 *
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *lastNode, *temp;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;
temp = *head;
if (temp == NULL)
	*head = newNode;
else
{
	while (temp->next !- NULL)
		temp = temp->next;
temp->next = newNode;
}
return (*head);
}

