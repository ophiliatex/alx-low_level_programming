#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
    size_t node_number = 1;

    while (h->next !=NULL)
    {
        printf("%d\n", h->next);

        h = h->next;
        node_number++;
    }

    printf("%d\n", h->next);

    return (node_number);
}
