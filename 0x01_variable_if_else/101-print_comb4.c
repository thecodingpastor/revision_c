#include <stdio.h>

/**
 * main - prints 012, 013, 014, 015, ..., 789
 * putchar used MAX 6 times
 * type of char  not allowed
 * Return: 0
 */

int main(void)
{
	int i, j, k;
	
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i), putchar('0' + j), putchar('0' + k);
				if (i == 7 && j == 8 && k == 9)
					continue;
				else
					putchar(','), putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
