#include <stdio.h>
/**
 * main - input
 * Description: prints alhpabet in lower case
 * Return: should always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
		putchar('\n');
	return (0);
}
