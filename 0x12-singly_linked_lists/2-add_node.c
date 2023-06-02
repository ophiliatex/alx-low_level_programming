#include "lists.h"

/**
 * add_node - adds a new node at the end of a list_t list
 * @head: pointer to pointer to list_t
 * @str: string to add to new node
 * Return: address of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->str = strdup(str);
	new->len = str_len;
	*head = new;

	return (*head);
}
