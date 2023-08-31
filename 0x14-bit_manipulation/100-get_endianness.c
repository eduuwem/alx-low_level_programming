#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *c = (unsigned char *) &i;

	return (*c == 1) ? 1 : 0;
}

