#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;  /* Declare a pointer to the current node */

	while (head != NULL)
	{
		current = head;
		head = head->next;  /* Move to the next node */

		free(current);  /* Free the current node */
	}
}
