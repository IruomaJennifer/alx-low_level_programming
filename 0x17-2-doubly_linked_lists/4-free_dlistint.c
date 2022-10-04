#include "lists.h"

/**
 * free_dlistint - frees a listint_t list
 * @head: pointer to the head node
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *previous;

	while (current != NULL)
	{
		previous = current;
		current = current->next;
		free(previous);
	}
}

