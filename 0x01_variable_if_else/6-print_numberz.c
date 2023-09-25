#include <stdio.h>

/**
 * main - print 0 - 9 using putchar and NO char
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
