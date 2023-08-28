#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a
 * listint_t list
 * @head: pointer to the head of the first node in the
 * linked list
 * @n: setting the new nodes to the next pointer
 *
 * Return: the address of the element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_addnode = malloc(sizeof(listint_t));

	if (!new_addnode)
	return (NULL);

	new_addnode->n = n;
	new_addnode->next = *head;
	*head = new_addnode;

	return (new_addnode);
}

