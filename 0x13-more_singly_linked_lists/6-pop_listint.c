#include "lists.h"

/**
 * pop_listint - deletes the head of a node and returns its data
 * @head: pointer to pointer of a node
 *
 * Return: the integer type data of the node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *next;

	if (*head == NULL)
		return (n);
	next = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next;
	return (n);
}


