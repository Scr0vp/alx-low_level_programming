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
	listint_t *current, *tmp;

	if (!h || !*h)
		return (0);

	current = *h;
	*h = NULL;

	while (current)
	{
		tmp = current->next;

		if (current >= tmp)
		{
			free(current);
			break;

		}

		free(current);
		len++;
		current = tmp;
	}

	return (len);
}
