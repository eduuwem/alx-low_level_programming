#include "lists.h"

/**
 * print_listint - print all elements of a listint_t list
 * @h:pointer to the head of the linked list as an argument
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)

{

	size_t element_num = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	element_num++;
	}
	return (element_num);
}
