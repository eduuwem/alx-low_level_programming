#include "lists.h"

/**
 * sum_listint - function that returns sum of all the data(n)
 * of listint_t list
 * @head: pointer to the head of the node
 * linked_t list
 *
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *temp = head;

	if (temp != NULL)

	{
		do

		{
			total_sum += temp->n;
			temp = temp->next;
		} while (temp != NULL);
	}
	return (total_sum);
}
