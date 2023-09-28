#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal numbers
 * @n: number to print the decimal number to binary
 */
void print_binary(unsigned long int n)
{
	int bit_shift = 0;
	unsigned long int temp_num = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (temp_num > 0)
	{
		temp_num >>= 1;
		bit_shift++;
	}

	while (bit_shift > 0)
	{
		bit_shift--;
		_putchar(((n >> bit_shift) & 1) + '0');
	}
}

