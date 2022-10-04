#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at an index
 * @head: pointer to pointer to listint_t
 * @idx: the given index
 * @n: the data value of the new node
 *
 * Return: a pointer to listint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *current, *new_node, *previous = NULL;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	current = *head;
	if (!current)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->prev = previous;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->prev = previous;
			new_node->next = current;
			if (current == *head)
				*head = new_node;
			else
				previous->next = new_node;
			return (new_node);
		}
		previous = current;
		current = current->next;
		i++;
	}
	return (NULL);
}

