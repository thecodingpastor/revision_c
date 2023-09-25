#include <stdio.h>

/**
 * main - prints 00 01, 00 02, 00 03, 00 04, ..., 98 99
 * type char NOT  allowed
 * putchar used MAX of 8 times
 * Return: 0
 */
int main(void)
{
	int i, j;
	
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i != j)
			{
				putchar((i / 10) + '0'), putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0'), putchar((j % 10) + '0');
				if ((i / 10 == 9) && (i % 10 == 8) && (j / 10 == 9) && (j % 10 == 8))
					putchar(','), putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
