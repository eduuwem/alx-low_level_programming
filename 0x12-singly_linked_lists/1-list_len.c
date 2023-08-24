#include <stdlib.h>
#include "lists.h"

/**
 * list_len - funcion that returns the number of elements
 * in a linked list_t
 * @h: pointer to the head of linked list_t
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
		return (num);
}

