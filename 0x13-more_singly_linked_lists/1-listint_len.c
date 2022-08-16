#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t
 * @h: pointer to the head node of the list
 *
 * Return: a size_t number
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t elements = 0;

	while (current != NULL)
	{
		elements++;
		current = current->next;
	}
	return (elements);
}

