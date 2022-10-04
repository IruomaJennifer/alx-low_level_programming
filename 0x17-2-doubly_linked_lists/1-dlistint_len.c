#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a doubly linked listint_t
 * @h: pointer to the head node of the linked list
 *
 * Return: a size_t number
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t elements = 0;

	while (current != NULL)
	{
		elements++;
		current = current->next;
	}
	return (elements);
}

