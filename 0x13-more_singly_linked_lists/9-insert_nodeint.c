#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at an index
 * @head: pointer to pointer to listint_t
 * @idx: the given index
 * @n: the data value of the new node
 *
 * Return: a pointer to listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *new_node, *prev;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->next = current;
			if (current == *head)
				*head = new_node;
			else
				prev->next = new_node;
			return (new_node);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (NULL);
}

