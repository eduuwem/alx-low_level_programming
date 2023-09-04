#include "main.h"

/**
 * append_text_to_file - function that append text at the end of a
 * file.
 * @filename: pointer to the name of the file.
 * @text_content:  is the NULL terminated string to add at the
 * end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int describe_file, pages_shown, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	describe_file = open(filename, O_WRONLY | O_APPEND);
	pages_shown = write(describe_file, text_content, len);

	if (describe_file == -1 || pages_shown == -1)
	return (-1);

	close(describe_file);

	return (1);
}

