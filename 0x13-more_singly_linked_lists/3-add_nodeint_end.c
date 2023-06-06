#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end: new node to be added a list
 *
 * @head: pointer  to the  head pointer
 * 
 * Description: singly linked list node structure
 * 
 * Return: address to the new element otherwise, NULL
 * 
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *lastNode;

newNode = malloc(sizeof(listint_t));
if (newNode = NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
    *head = newNode;
    return (newNode);
}

lastNode = *head;
while (lastNode->next != NULL)
lastNode = lastNode->next;
lastNode = newNode;
return (newNode);
}