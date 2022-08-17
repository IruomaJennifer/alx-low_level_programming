#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 * can free lists containing loops)
 *
 * @h: A pointer to the address of
 * the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	size_t nodes, index;

	nodes = looped_listint_len(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
		}

		*h = NULL;
	}


	return (nodes);
}
