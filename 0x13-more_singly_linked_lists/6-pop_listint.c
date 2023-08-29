#include "lists.h"

/**
 * pop_listint - function to deletes the head node of a
 * linked list
 * @head: pointer to the head of the nodes
 * linked_t list
 *
 * Return: the head node’s data (n), 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *count, *temp;
	int x;

	if (head == NULL)
		return (0);
	temp = count = *head;
	if (*head)
	{
		x = count->n;
		*head = count->next;
		free(temp);
	}
	else
		x = 0;
	return (x);
}

