#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t element_count = 0;  /* Initialize the element count to 0 */

	while (h != NULL)
	{
		/* Move to the next node */
		h = h->next;

		element_count++;  /* Increment the element count */
	}

	return (element_count);  /* Return the element count */
}
