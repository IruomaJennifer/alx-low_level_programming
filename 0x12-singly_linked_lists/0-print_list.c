#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a struct
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	if (current != NULL)
	{
		while (current != NULL)
		{
			if (current->str == NULL)
			{
				printf("[%d] (nil)\n", 0);
				nodes++;
				current = current->next;
				continue;
			}
			printf("[%d] %s\n", current->len, current->str);
			nodes++;
			current = current->next;
		}
		return (nodes);
	}
	else
		return (nodes);
}

