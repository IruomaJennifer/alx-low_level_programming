#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer of dlistint_t node
 * @n: an int
 *
 * Return: a pointer to dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *previous = NULL;

	while (current != NULL)
	{
		previous = current;
		current = current->next;
	}

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);
	current->prev = previous;
	if (previous != NULL)
		previous->next = current;
	current->n = n;
	current->next = NULL;
	if (*head == NULL)
		(*head) = current;
	return (current);
}


