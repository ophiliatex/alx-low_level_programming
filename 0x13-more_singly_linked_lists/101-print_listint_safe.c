#include "lists.h"

/**
 * freeLlist - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void freeListp(listp_t **head)
{
	list_t *temp;
	list_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = cur) != NULL)
		{
			curr = cur->next;
			free(temp);
		}
		*head = NULL;
	}
}



/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head node
 *
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
size_t l = 0;
listp_t *hdptr, *new, *add;

hdptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = *head;
		new->next = hdptr;
		hdptr = new;

		add = hdptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", *head, head->n);
				freeListp(&hdptr);
				return (l);
			}
		}

		printf("[%p] %d\n", (head, head->n);
		head = head->next;
		l++;
	}

	freeListp(&hdptr);
	return (l);
}
