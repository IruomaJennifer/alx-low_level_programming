#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of listint_t node
 * @n: an int
 *
 * Return: a pointer to listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head, *prev = *head;

	while (current != NULL)
	{
		prev = current;
		current = current->next;
	}

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (*head == NULL)
		*head = current;
	else
		prev->next = current;
	return (current);
}


