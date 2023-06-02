#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to list_t
 * @str: string to add to new node
 * Return: address of new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *last;
unsigned int index;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

for (index = 0; str[index] != '\0'; index++)
;

new->str = strdup(str);
new->len = index;
new->next = NULL;

if (*head == NULL)
*head = new;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}

return (new);
}
