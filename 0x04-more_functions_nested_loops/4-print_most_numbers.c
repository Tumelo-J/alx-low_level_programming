#include "main.h"

/**
  * print_most_numbers - Function Prints nums 0 to 9
  * Return: void
*/
void print_most_numbers(void)
{
	int i;

	for (i = '0'; (i <= '9') && (i != '2') && (i != '4'); i++)
		_putchar(i);
	_putchar('\n');
}
