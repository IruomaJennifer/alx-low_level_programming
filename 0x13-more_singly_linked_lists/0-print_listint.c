#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the head of a linked list
 *
 * Return: a number of type size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		n++;
		current = current->next;
	}
	return (n);
}
