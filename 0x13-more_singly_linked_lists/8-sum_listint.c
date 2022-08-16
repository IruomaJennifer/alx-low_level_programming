#include "lists.h"

/**
 * sum_listint - function to return the sum of all the data of a listint_t
 * linked list
 * @head: pointer to the head node
 *
 * Return: an integer sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
