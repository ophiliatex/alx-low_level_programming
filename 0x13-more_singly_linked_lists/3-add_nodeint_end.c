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
listint_t *newNode, listint_t *temp;

newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);

(*newNode).n = n;
(newNode-).next = NULL;

if (*head == NULL)
{
	*head = newNode;
	return (new);
}
while (temp->next)
	temp = temp->next;
temp->next = newNode;

return (newNode);
}

