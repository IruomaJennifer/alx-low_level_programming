#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current = head, *prev;

	while (current != NULL)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
}

