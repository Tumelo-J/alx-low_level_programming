#include "main.h"

/**
  * print_line - Function Prints nums 0 to 9
  * @n: Number of times the underscore in printed
  * Return: void
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
	}
	_putchar('\n');
}
