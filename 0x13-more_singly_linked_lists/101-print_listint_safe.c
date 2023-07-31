#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 0;

	tortoise = hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			do {
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
				nodes++;
			} while (head != hare);

			printf("-> [%p] %d\n", (void *)head, head->n);
			nodes++;
			return (nodes);
		}
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	return (nodes);
}
