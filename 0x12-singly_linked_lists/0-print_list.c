#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t index;

for (index = 0; h != NULL; index++)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
}
return (index);
}
