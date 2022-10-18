#include "main.h"

/**
  * main - Prints _putchar
  *
  * Description: Using _putchar function
  * from "main.h" file this prints _putchar to the stdout
  *
  * Return: 0 (success)
  */
int main(void)
{
	char ch[] = {"_", "p", "u", "c", "h", "a", "r"};
	int idx;

	for (idx = 0; idx < sizeof(ch); idx++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
