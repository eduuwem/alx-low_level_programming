#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{


	if (head == NULL)
		return;

	while (*head)
	{
		listint_t *temp = (*head)->next;

		free(*head);

		*head = temp;
	}

}

