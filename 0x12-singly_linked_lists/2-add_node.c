#include "lists.h"

/**
 * add_node - adds a new node at the end of a list_t list
 * @head: pointer to pointer to list_t
 * @str: string to add to new node
 * Return: address of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node, *last;
unsigned int index;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

for (index = 0; str[index] != '\0'; index++)
;

new_node->str = strdup(str);
new_node->len = index;
new_node->next = NULL;

if (*head == NULL)
*head = new_node;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new_node;
}

return (new_node);
}
