#include <stdio.h>
/**
 * main - Inputs
 * Description: combination of digit number
 * Return: should be 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
		continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
