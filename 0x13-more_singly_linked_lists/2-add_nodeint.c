#include "lists.h"

/**
 * add_nodeint - a function to add a node to the beginning of
 * a listint_t linked list
 * @head: pointer to pointer of a head node
 * @n: an integer
 *
 * Return: a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;
	return (current);
}

