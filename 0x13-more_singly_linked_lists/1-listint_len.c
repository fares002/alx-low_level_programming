#include"lists.h"
#include<stdio.h>
/**
 * listint_len- function thats return the number of node.
 * @h: pointer to the list.
 *
 * Return: the number of the nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	printf("%d elements", node_count);
	return (node_count);
}