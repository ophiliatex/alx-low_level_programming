#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_Lstp(listp_t **head)
{
	listp_t *temp;
	listp_t *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((temp = cur) != NULL)
		{
			cur = cur->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a listint_t list, even if it has a loop
 * sets head to NULL
 * @h: double pointer to head of list
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hdptr, *new, *add;
	listint_t *cur;

	hdptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hdptr;
		hdptr = new;

		add = hdptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_Listp(&hdptr);
				return (nnode);
			}
		}

		cur = *h;
		*h = (*h)->next;
		free(cur);
		nnode++;
	}

	*h = NULL;
	free_Listp(&hdptr);
	return (nnode);
}
