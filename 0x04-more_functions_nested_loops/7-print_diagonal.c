#include "main.h"

/**
  * print_diagonal - Prints diagonal
  * @n: Number of times the backslash in printed
  * Return: void
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < (n - 1); j++)
			       _putchar(32);
			_putchar(92); 
			_putchar('\n');
		}
	}
}
