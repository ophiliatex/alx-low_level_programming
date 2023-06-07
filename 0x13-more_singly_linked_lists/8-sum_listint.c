#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of list
 * Return: 0 if list is empty
*/

int sum_listint(listint_t *head)
{
int sum = o;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
