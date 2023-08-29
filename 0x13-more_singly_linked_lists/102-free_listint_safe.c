#include "lists.h"

/**
 * free_listint_safe - functions to frees a listint_t list
 * @h: pointer to the head of the linked list to frees
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current_node = *h;
	listint_t *previous_node = NULL;

	while (current_node)
	{
		listint_t *next = current_node->next;

		if (next && next->next == current_node)
		{
			int temp = current_node->n;

			current_node->n = next->n;
			next->n = temp;

			if (previous_node)
				previous_node->next = NULL;
			free(next);
			len++;
		}
		else
		{
			previous_node = current_node;
		}

			current_node = next;
	}

	if (previous_node)
		previous_node->next = NULL;
	free(current_node);
	*h = NULL;

	return (len);
}
