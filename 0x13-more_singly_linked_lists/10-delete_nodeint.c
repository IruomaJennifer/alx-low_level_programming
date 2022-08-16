#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an index
 * @head: pointer to pointer to listint_t
 * @index: the index
 *
 * Return: 1 if successful and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head, *prev;

	while (current != 0)
	{
		if (i == index)
		{
			if (current == *head)
				*head = current->next;
			else
				prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (-1);
}

