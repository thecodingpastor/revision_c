#include <stdio.h>

/**
 * main - prints 01, 02, 03, 04, 05, 06, ..., 89.
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i), putchar('0' + j);
			if (i == 8 && j == 9)
				continue;
			else
				putchar(','), putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
