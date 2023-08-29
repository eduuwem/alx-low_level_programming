#include "lists.h"

/**
 * insert_nodeint_at_index - inserting new node at a given position
 * @head: pointer to the head of the node
 * @idx: index where node will be insertted
 * @n: integer value to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int b;
	listint_t *prev = NULL;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	for (b = 0; temp && b < idx; b++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (b == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (b == idx)
	{
		new_node->next = temp;
		prev->next = new_node;
	}
	else
	{
		free(new_node);
		return (NULL);
	}

	return (new_node);
}

