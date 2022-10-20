#include "main.h"

/**
 * print_square - print square of a certain size
 * @size: dimension
 *
 * Description: This function prints sqaure
 * of a given size passed
 *
 * Return: 0 (nothing)
 */
void print_square(int size)
{
	int sqr, cunt;

	for (cunt = 1; cunt <= size; cunt++)
	{
		if (size <= 0)
			_putchar('\n')
		else
			for (sqr = 0; sqr <= size; sqr++)
				_putchar('#');
		_putchar('\n');
	}
}
