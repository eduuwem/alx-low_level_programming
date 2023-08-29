#include "lists.h"

/**
 * reverse_listint - function to reverse a listint_t linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;

	while (*head != NULL)
	{

		listint_t *next = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next;
	}

	return (previous_node);
}
