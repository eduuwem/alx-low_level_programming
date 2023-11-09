#include "lists.h"

/**
 * free_dlistint - functions to frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: zero
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	for (; head->next; head = head->next)
		free(head->prev);

	free(head);
