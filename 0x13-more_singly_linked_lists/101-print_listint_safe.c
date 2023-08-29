#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function to print listint_t in a loop
 * @head: pointerto the head of the print listint_t in a loop
 *
 * Return: the number of nodes in the loop, if fails exit
 * the program with status 98
 */
size_t looped_listint_len(const listint_t *head)
{
	size_t portions = 1;
	const listint_t *plantain;
	const listint_t *food;

	if (head == NULL || head->next == NULL)
		 return (0);
	plantain = head->next;
	food = head->next->next;

	while (food && food->next)
	{
		if (plantain == food)
		{
		
			return (portions);
		}

		plantain = plantain->next;
		food = food->next->next;
		portions++;
	}

	return (0);
}

/**
 * print_listint_safe - Printing a listint_t in a loop
 * @head: pointerto the head of the print listint_t in a loop
 *
 * Return: the number of nodes in the loop, if fails exit
 * the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		if (head->next && (head->next < head))
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}

		head = head->next;
	}

	return count;
}

