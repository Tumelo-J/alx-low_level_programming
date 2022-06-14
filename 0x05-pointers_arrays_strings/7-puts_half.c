#include "main.h"

/**
  * puts_half -Prints a string to stdout
  * @str: Input string
  * Return: void
  */
void puts_half(char *str)
{
	int length = 0, n;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
		n = length -  (length - 1) / 2;
	else
		n = length - length / 2;
	while (n < length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
