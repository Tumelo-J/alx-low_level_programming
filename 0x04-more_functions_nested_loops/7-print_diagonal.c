#include "main.h"
/**
 * print_diagonal - Function prototype
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (; i < n; i++)
		{
			for (x = 0; x < i; x++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
}
