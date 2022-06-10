#include "main.h"

/**
 * more_numbers - Function prototype
 * Description: Prints 0-14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);

			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
