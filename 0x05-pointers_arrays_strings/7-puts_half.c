#include "main.h"

/**
  * puts_half -Prints a string to stdout
  * @str: Input string
  * Return: void
  */
void puts2(char *str)
{
	int length = 0, n;

	while (str[length] != '\0')
	{
		length++
	}

	if (length % 2 != 0)
		n = length -  ((length - 1)/2) - 1;
	else
		n = length - ((length/2) - 1);
	while (n < length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
