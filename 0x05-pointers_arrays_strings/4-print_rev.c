#include "main.h"

/**
  * print_rev -Prints a string to stdout in reverse
  * @s: Input string
  * Return: void
  */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (length != -1)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
