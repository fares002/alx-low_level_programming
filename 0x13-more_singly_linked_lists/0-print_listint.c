#include"lists.h"
#include<stdio.h>

/**
 * print_listint - function thats return the number of node.
 * @h: pointer to the list.
 * @i: the numbers of the nodes
 * Return : the number of the nodes in the list .
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
