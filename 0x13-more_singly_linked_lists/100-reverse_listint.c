#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to a pointer of listint_t
 *
 * Return: pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head, *prev = NULL;

	while ((*head) != NULL)
	{
		*head = (*head)->next;
		temp->next = prev;
		prev = temp;
		temp = *head;
	}
	*head = prev;
	return (*head);
}

