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
	int num1, num2, cunter, num;
	int next_num;

	num = 98;

	for (cunter = 1; cunter <= num; cunter++)
	{
		if (cunter == 98)
		{
			printf("%d, ", num2);
		}
		else
		{
			printf("%d, ", num2);
			next_num = num1 + num2;
			num1 = num2;
			num2 = next_num;
		}
	}
	printf("\n");

	return (0);
}
