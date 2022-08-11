#include "lists.h"

/**
 * add_node_end - adds a node at the beginning of a list_t list
 * @head: pointer to a pointer to struct liat_t
 * @str: pointer to char
 *
 * Return: a pointer to struct
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL, *current;

	if (head != NULL)
	{
		current = *head;
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->len = strlen(str);
		temp->str = strdup(str);
		temp->next = NULL;
		if (*head == NULL)
		{
			*head = temp;
			return (temp);
		}
		while (current->next != NULL)
			current = current->next;
		current->next = temp;
	}
	return (temp);
}

