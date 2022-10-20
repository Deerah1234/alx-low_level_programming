#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: number of diagonal lines
 *
 * Description: This function prints a diagonal line
 * that end with a new line
 *
 * Return: void (nothing)
 */
void print_diagonal(int n)
{
	int cunt, diagnl;

	if (n <= 10)
		_putchar('\n')
	else
	{
		for (cunt = 1; cunt <= n; cunt++)
		{
			for (diagnl = 1; diagnl <= cunt; diagnl++)
			{
				if (diagnl != cunt)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
