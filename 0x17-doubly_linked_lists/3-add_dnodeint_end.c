#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)  /* Check if memory allocation failed */
		return (NULL);

	new_node->n = n;  /* Set the value of the new node */
	new_node->next = NULL;  /* Set the next pointer to NULL */

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;  /* Initialize temp to the head of the list */

		while (temp->next != NULL)
		temp = temp->next;  /* Traverse to the last node */

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
