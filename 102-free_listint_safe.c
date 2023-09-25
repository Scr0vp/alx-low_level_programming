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
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	current = *h;

	while (current)
	{
		next = current->next;
		current->next = NULL;
		free(current);
		len++;

		if (current >= next)
			break;

		current = next;
	}

	*h = NULL;

	return (len);
}
