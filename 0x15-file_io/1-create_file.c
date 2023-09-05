#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: is the pointer to the name of the file to create
 * @text_content: is the pointer to a NULL terminated
 * string to write to the file
 *
 * Return: On success, returns 1 (indicating success).
 *	On failure, returns -1 (indicating failure).
 */
int create_file(const char *filename, char *text_content)
{
	int book, pages_shown, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	book = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	pages_shown = write(book, text_content, len);

	if (book == -1 || pages_shown == -1)
	return (-1);

	close(book);

	return (1);
}


