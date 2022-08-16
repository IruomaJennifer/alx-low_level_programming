#include "lists.h"

/**
 * free_listint2 - free a listint_t and sets it to NULL
 * @head: pointer to a pointer to head node
 *
 * Return: nada
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *prev;

	if (head == NULL)
		return;
	while (current != NULL)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
	*head = current;
}

