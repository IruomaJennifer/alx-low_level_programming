#include "lists.h"

/**
 * find_listint_loop - finds the loop/cycle in a listint_t
 * list
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: the node at which the cycle begins
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast && fast->next)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (NULL);
}

