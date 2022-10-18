#include "holberton.h"

/**
  * main - print print_alphabet_x10 statements
  *
  * Description: This function prints the
  * print_alphabet_x10 statements which are
  * a-z 10 times
  *
  * Return: 0 (success)
  */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
  * print_alphabet_x10 - print a-z 10 times
  *
  * Description: This function prints a-z 10 times
  *
  * Return: void (nothing)
  */
void print_alphabet_x10(void)
{
	char ch;
	int cunter;

	for (cunter = 1; cunter <= 10; cunter++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar("\n");
	}
}
