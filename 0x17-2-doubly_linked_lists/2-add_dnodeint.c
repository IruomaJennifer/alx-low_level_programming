#include "lists.h"

/**
 * add_dnodeint - a function to add a node to the beginning of
 * a dlistint_t linked list
 * @head: pointer to pointer of a head node
 * @n: an integer
 *
 * Return: a pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->prev = NULL;
	current->next = *head;
	if (*head != NULL)
		(*head)->prev = current;
	*head = current;
	return (current);
}

