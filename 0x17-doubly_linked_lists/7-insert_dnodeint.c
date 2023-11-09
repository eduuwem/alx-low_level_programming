#include "lists.h"

/**
 * insert_dnodeint_at_index - function to  inserts a new node at
 * n
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node where new node added
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *head = *h;

	if (idx == 0)
		return add_dnodeint(h, n);

	for (unsigned int i = 1; head && i <= idx; i++)
	{
		if (i == idx)
		{

			if (!head->next)
				new = add_dnodeint_end(h, n);
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new != NULL)
				{
					new->n = n;
					new->next = head->next;
					new->prev = head;
					if (head->next)
						head->next->prev = new;
					head->next = new;
				}
			}
			break;
		}
		head = head->next;
	}

	return new;
}

