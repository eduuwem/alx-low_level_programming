#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node, starting from 0
 * Return: null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;

	if (head == NULL)
	return (NULL);

	do
	{

		if (index == size)
			return head;
		size++;
		head = head->next;
	} while (head);

	return NULL;
}

