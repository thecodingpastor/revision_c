#include <stdio.h>

/**
 * main - print 0, 1, 2, ...., 9 with putchar
 * char type not allowed
 * putchar can be used MAX 4 times
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		if (i < 9)
			putchar(','), putchar(' ');
		i++;
	}
	return (0);
}
