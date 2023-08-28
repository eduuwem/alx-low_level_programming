#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a
 * listint_t list
 * @head: pointer to the head of the first
 * node in the linked list
 * @n: setting the new nodes to the next pointer
 *
 * Return: address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	 listint_t *new_addnode_end = malloc(sizeof(listint_t));

	if (!new_addnode_end)
		return (NULL);

	new_addnode_end->n = n;
	new_addnode_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_addnode_end;
		return (new_addnode_end);
	}
	else
	{
	listint_t *temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_addnode_end;
	}
	return (new_addnode_end);
}


