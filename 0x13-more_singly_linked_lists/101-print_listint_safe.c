#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head node
 *
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
size_t l = 0;
const listint_t *one *two;

if (!head)
return (0);

while (two && two->next)
{
printf("[%p] %d\n", (void *)first, first->n);
l++;
one = one->next;
two = two->next->next;
}

printf("[%p] %d\n", (void *)first, first->n);
i++;

if (two)
{
printf("-> [%p] %d\n", (void *)second, second->n);
exit(98);
}

return (i);
}