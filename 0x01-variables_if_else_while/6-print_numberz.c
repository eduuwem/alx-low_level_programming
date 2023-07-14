#include <stdio.h>
/**
 * main - Inputs
 * Description: 'prints base 10 numbers using putchar'
 * Return: Ailways 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
