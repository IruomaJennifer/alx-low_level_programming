#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to a struct list_t
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current = head, *prev;

	while (current != NULL)
	{
		prev = current;
		current = current->next;
		free(prev->str);
		free(prev);
	}
}

