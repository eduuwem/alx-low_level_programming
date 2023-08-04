#include "main.h"

/**
 * _isdigit - function checked 0 to 9
 * @c: Parameter function
 * Return: 1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
