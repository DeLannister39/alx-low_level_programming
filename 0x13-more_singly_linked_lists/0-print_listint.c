#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: pointer that listint structure
 *
 * Return: no. of nodes
 */

size_t print_listint(const listint_t *h)


{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
