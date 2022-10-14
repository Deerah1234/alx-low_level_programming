#include <stdio.h>

/**
  * main - Prints numbers from 0-9
  *
  * Description: Using putchar() function.
  * This prints numbers from 0-9
  *
  * Return: 0 (sccuess)
  */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	printf("\n");
	return (0);
}
