#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;  /* Move to the next node */
		i++;  /* Increment the current index */
	}

	return (NULL);
}
