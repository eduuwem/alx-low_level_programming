#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node at a
 * linked list
 * @head: pointer of the head to the node of linked list
 * @index: index of the node
 *
 * Return: NULL if the code exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	for (temp = head; temp && index > 0;)
	{
		temp = temp->next;
		index--;
	}

	return (temp);
}


