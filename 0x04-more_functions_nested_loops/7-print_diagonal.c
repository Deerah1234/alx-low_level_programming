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

	for (cunt = 0; cunt <= n; cunt++)
	{
		if (n <= 0)
			_putchar('\n');
		for (diagnl = 0; diagnl <= cunt; diagnl++)
		{
			if (diagnl != cunt)
				_putchar(' ');
			else
				_putchar('\\');
		}
		_putchar('\n');
	}
}
