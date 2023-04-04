#include "lists.h"

/**
 * get_nodeint_at_index - This function gets a node of list at specific index
 * @head: This is the  first node in the linked list
 * @index: The index of the node that is to return
 *
 * Return: A pointer to node at specified index, or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
