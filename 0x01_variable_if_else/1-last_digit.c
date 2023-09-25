#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints the last digit of the num stored in the variable n
 * Return: Always (0) Success
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = abs(n % 10);

	printf("Last digit of %d is %d ", n, lastDigit);
	
	if(lastDigit > 5)
		printf("and it is greater than 5\n");
	else if (lastDigit == 0)
		printf("and it is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	
	return (0);
}

