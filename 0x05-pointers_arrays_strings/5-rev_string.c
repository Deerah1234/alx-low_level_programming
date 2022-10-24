#include "holberton.h"

/**
 * rev_string - reverse a string
 * @str: the string to be reversed
 *
 * Description: This function reverse a given string
 * reverse
 *
 * Return: void (nothing)
 */
void rev_string(char *str)
{
	int i, len;
	char temp;

	len = _strlen(str);
	for (i = 0; i < len / 2; ++i)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}

/**
 * _strlen - evaluate the length of a string
 * @str: the string to be processed
 *
 * Description: This function evaluate the given length of
 * a string
 *
 * Return: the length of the the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	return (i);
}
