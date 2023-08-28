#include "lists.h"

/**
 * free_listint - function to frees a linked list
 * @head: pointer to the head of listint_t list to be freed
 */
void free_listint(listint_t *head)
{

	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;

		free(temp);
	}
}
