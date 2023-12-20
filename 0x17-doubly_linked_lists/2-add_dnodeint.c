#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;  /* Declare a pointer to a new node */

	new_node = malloc(sizeof(dlistint_t));  /* Allocate memory for the new node */

	if (new_node == NULL)  /* Check if memory allocation failed */
	return (NULL);

	new_node->n = n;  /* Set the value of the new node */
	new_node->prev = NULL;  /* Set the previous pointer to NULL */

	if (*head == NULL)
	{
		new_node->next = NULL;  /* Set the next pointer to NULL */
	}
	else
	{
		new_node->next = *head;  /* Set the next pointer to the current head */
		(*head)->prev = new_node;  /* Update the previous pointer */
	}

	*head = new_node;  /* Update the head to point to the new node */

	return (new_node);
}
