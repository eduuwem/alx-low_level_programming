#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 * listint_t list
 * @h:pointer to the head of the linked list of type
 * listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	 size_t element_num = 0;

	while (h != NULL)
	{
	h = h->next;
	element_num++;
	}
	return (element_num);
}

