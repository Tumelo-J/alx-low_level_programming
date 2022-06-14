#include "main.h"

/**
  * _puts2 -Prints a string to stdout
  * @str: Input string
  * Return: void
  */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		_putchar('\n');
	}
}
