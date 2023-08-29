#include "lists.h"

/**
 * find_listint_loop - function that loop in a listint_t list
 * @head: pointer to the head of the linked list
 *
 * Return: address of the node where the loop starts, or NULL
 * if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current_node = head;
	int node_count = 0;
	int b;

	while (current_node != NULL)
	{
		node_count++;
		current_node = current_node->next;
	}
	current_node = head;


	for (b = 0; b < node_count / 2; b++)
	{
		current_node = current_node->next;
	}
	for (b = 0; b < node_count / 2; b++)
	{
		current_node = current_node->next;

		if (current_node == head)
		return (head);
	}

	return (NULL);
}
