#include <stdio.h>

/**
 * main - prints all hexadecimal numbers
 * Return: 0
 */
int main(void)
{
	int num = 0;
	
	while (num < 16)
	{
		if (num < 10)
			putchar(num + '0');
		else
			putchar('a' + (num - 10));
		num++;
	}
	putchar('\n');

	return (0);
}

