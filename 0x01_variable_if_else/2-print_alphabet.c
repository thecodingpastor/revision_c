#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * Return: Always (0) Success
 */

int main(void)
{
	char letter = 'a';
	
	while (letter >= 'a' && letter <= 'z')
		putchar(letter++);
	putchar('\n');

	return (0);
}
