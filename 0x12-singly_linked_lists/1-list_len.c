#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to a struct
 *
 * Return: returns the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}
	return (nodes);
}

