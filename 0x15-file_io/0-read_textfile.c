#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output. 
 * @filename: text file to be read
 * @letters: number of letters to read and print
 * returns : actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount
 * of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *page;
	ssize_t book;
	ssize_t pages_shown;
	ssize_t pages_read;

	book = open(filename, O_RDONLY);
	if (book == -1)
		return (0);
	page = malloc(sizeof(char) * letters);
	pages_read = read(book, page, letters);
	pages_shown = write(STDOUT_FILENO, page, pages_read);

	free(page);
	close(book);
	return (pages_shown);
}




