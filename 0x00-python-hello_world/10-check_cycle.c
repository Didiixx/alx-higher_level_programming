#include "lists.h"

/**
 * check_cycle - will checks if there is a cycle in the linked list
 * @list: the linked list that must be checked
 *
 * Return: if the list has a cycle 1, if it doesn't 0
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}

