#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list, even if it has a loop
 * sets head to NULL
 * @h: double pointer to head of list
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *tmp = *h, *tmp1 = *h;
size_t i = 0;

if (!h || !*h)
return (0);

while (tmp && tmp1 && tmp1->next)
{
tmp = tmp->next;
tmp1 = tmp1->next->next;
if (tmp == tmp1)
{
tmp = *h;
while (tmp != tmp1)
{
tmp = tmp->next;
tmp1 = tmp1->next;
}
tmp1 = tmp1->next;
while (tmp1 != tmp)
{
tmp1 = tmp1->next;
i++;
}
i++;
break;
}
}
while (*h)
{
tmp = *h;
*h = (*h)->next;
free(tmp);
}
*h = NULL;
return (i);
}
