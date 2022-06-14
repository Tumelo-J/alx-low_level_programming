#include "main.h"

/**
  * _puts -Prints a string to stdout
  * @str: Input string
  * Return: void
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
