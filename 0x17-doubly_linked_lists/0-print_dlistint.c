#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;  /* Initialize the node count to 0 */

	while (h != NULL)
	{
		/* Print the value of the current node */
		printf("%d\n", h->n);

		/* Move to the next node */
		h = h->next;

		node_count++;
	}

	return (node_count);
}
