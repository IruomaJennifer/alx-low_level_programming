#include "lists.h"

/**
 * sum_dlistint - function to return the sum of all the data of a listint_t
 * linked list
 * @head: pointer to the head node
 *
 * Return: an integer sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
