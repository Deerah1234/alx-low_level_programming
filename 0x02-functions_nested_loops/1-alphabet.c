#include <stdio.h>

/**
  * main - Prints the print_alphabet statements
  *
  * Description: This function takes in the print_alphabet
  * and display all the contents in the function passed
  * i.e print_alphabet
  *
  * Return: 0 (success)
  */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

/**
  * print_alphabet - Prints a-z
  *
  * Description: This function prints
  * characters from a-z then newline
  *
  * Return: void (nothing)
  */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	printf("\n");
}
