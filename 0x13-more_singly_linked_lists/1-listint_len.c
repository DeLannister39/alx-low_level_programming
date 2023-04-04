#include "lists.h"
#include <stdio.h>


/**
 * listint_len - This  function returns the number of elements
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
