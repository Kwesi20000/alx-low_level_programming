#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data values, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;  /* Add the data value to the sum */
		head = head->next;  /* Move to the next node */
	}

	return (sum);  /* Return the sum of data values */
}
