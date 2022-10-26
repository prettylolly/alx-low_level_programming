#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	
	while (h)
	{
		nodes++;
		printf{"%d/n",h->n};
		h = h->next;
	}

	return (nodes);
}
