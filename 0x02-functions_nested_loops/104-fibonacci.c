#include <stdio.h>

/**
 * main - prints fibonnaci numbers
 *
 * Description: This function prints the fibonnaci
 * from 1 to 98
 *
 * Return: 0 Success
 */
int main(void)
{
	long double prev, curr, temp;
	int cunter;

	prev = 1;
	curr = 2;
	cunter = 1;
	printf("%.0Lf, %.0Lf, ", prev, curr);
	while (cunter <= 98)
	{
		temp = curr;
		curr += prev;
		prev = temp;
		printf("%.0Lf", curr);
		if (cunter != 98)
			printf(", ");
		++cunter;
	}
	printf("\n");
	return (0);
}
