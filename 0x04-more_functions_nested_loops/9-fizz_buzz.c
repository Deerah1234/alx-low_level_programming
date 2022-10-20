#include <stdio.h>

/**
 * main - implement the Fizz Buzz program
 *
 * Description: print Fizz for multiples of 3 and Buzz for multiples
 * of 5, and FizzBuzz for multiples of both
 *
 * Return: 0 (success)
 */
int main(void)
{
	int value;

	value = 1;
	printf("%d", value);
	for (value = 2; value <= 100; value)
	{
		printf(" ");
		if (value % 3 == 0 || value % 5 == 0)
		{
			if (value % 3 == 0)
				printf("Fizz");
			if (value % 5 == 0)
				printf("Buzz");
		}
		else
			printf("%d", value);
	}
	printf("\n");
	return (0);
}
