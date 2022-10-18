#include "holberton.h"

/**
 * print_last_digit - print the last digit of an integer
 * @num: the number to be processed
 *
 * Description: This function return the last digit
 * of a number
 *
 * Return: last digit of num
 */
int print_last_digit(int num)
{
	int result;

	ldigit = num % 10;
	if (ldigit < 0)
		ldigit = -ldigit;
	_putchar(ldigit + '0');
	return (ldigit);
}