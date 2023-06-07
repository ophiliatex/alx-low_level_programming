#include "lists.h"

/**
 * listint_len - returns the number of elements of a list
 *
 * @h: points to the  node
 *
 * Description: singly linked list node structure
 *
 * Return: number of nodes
 *
*/

size_t listint_len(const listint_t *h)
{
size_t elements_number = 0;

while (h != NULL)
{
h = h->next;
elements_number++;
}
return (elements_number++);
}
