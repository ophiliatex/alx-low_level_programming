#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint: frees a list listint_t
 *
 * @head: pointer  to the  head node
 * 
 * Description: singly linked list node structure
 * 
 * Return: void
 * 
*/

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
