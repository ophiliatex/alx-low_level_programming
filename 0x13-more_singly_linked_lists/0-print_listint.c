#include "lists.h"

/**
 * print_listint: prints all elements of a list
 *
 * @h: points to the  node
 *
 * Description: singly linked list node structure
 *
 * Return: number of nodes
 *
*/

size_t print_listint(const listint_t *h)
{
size_t node_number = 0;

while (h)
{
printf("%d\n", (*h).n);
node_number++;
h = (*h).next;
}

return (node_number);
}
