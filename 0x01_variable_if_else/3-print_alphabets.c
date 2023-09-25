#include <stdio.h>

/**
 * main - prints alphabets in lower case, then in upper case
 * Return: Always (0) sucess
 */

int main(void)
{
	char i = 'a', j = 'A';

	while (i >= 'a' && i <= 'z')
		putchar(i++);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

