#include "main.h"

/**
 * binary_to_uint - functions to converts a binary number to
 * an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if there is one or more chars in the string
 * b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int stored_decval = 0;

	if (!b)
		return (0);

	for (; *b; b++)
	{
		if (*b < '0' || *b > '1')
			return (0);

		stored_decval = (stored_decval << 1) | (*b - '0');

	}
	return (stored_decval);
}
