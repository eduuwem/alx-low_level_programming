#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - pointer to a dynamically allocated
 * (malloc'ed) string.
 * @len: This is length of the string
 * @next: This is pointer to the next node in the list.
 *
 * Description: A singly linked list node structure tasks
 */
typedef struct list_s
{
		char *str;
		unsigned int len;
		struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

