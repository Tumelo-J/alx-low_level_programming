#include "main.h"

/**
  * more_numbers - Function Prints nums 0 to 14 ten times
  * Return: void
*/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
