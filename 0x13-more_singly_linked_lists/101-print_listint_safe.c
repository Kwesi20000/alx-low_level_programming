#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t
 * linked list safely (avoids infinite loops).
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head, *fast = head;
size_t node_count = 0;

while (fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next->next;

node_count++;

if (slow == fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
break;
}
}

if (fast == NULL || fast->next == NULL)
{
while (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
node_count++;
}
}

if (slow == NULL)
node_count = 0;

return (node_count);
}
