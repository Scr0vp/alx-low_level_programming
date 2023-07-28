#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function frees the memory allocated for a linked list.
 * It takes a pointer to the head of the linked list as an argument.
 * The list is traversed, and each node is freed along with its string data.
 * The 'head' pointer is updated to move to the next node for each iteration.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
