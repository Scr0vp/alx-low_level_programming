#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *slow, *fast;

	if (!h || !*h)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast && fast->next)
	{
		if (slow == fast)
			break;

		slow = slow->next;
		fast = fast->next->next;
	}
	if (slow == fast)
	{
		slow = *h;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	while
	{
		listint_t *temp = slow;

		slow = slow->next;
		free(temp);
		len++;
	}

	*h = NULL;

	return (len);
}
