#include <stdio.h>
/**
 * main - prints the alphabets in reverse order
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
		putchar(letter--);
	putchar('\n');
	return (0);
}
