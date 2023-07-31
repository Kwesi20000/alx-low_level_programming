#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given position in a listint_t linked list.
 * @head: Double pointer to the head of the list.
 * @idx: The index of the new node (starts at 0).
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp = *head;
unsigned int count = 0;

if (head == NULL)
return (NULL);

if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

while (temp != NULL && count < idx - 1)
{
temp = temp->next;
count++;
}

if (temp == NULL || temp->next == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
