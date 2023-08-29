#include "lists.h"

/**
 * delete_nodeint_at_index - fuunction deletting node
 * at index of a listint_t
 * @head: pointer to the head of linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int b;
	listint_t **current_node = head;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	for (b = 0; *current_node != NULL && b < index; b++)
	{
		current_node = &((*current_node)->next);
	}

	if (*current_node == NULL)
		return (-1);

	temp = *current_node;
	*current_node = temp->next;

	free(temp);
	return (1);
}


