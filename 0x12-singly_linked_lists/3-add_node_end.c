#include "lists.h"
/**
 * _strlen - to get the length of a string
 * @s: a pointer to a character
 * Return: an int
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len) != '\0' && s != NULL)
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - adds a node at the beginning of a list_t list
 * @head: pointer to a pointer to struct liat_t
 * @str: pointer to char
 *
 * Return: a pointer to struct
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL, *current, *prev;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			prev = current;
			current = current->next;
		}
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->len = _strlen(str);
		temp->str = strdup(str);
		temp->next = current;
		if (*head == NULL)
			*head = temp;
		prev->next = temp;
		return (temp);
	}
	return (temp);
}

