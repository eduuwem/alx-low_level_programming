#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in
 * a dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
		count++;

	return (count);
}
