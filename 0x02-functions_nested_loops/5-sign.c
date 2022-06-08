#include "main.h"
/**
  * print_sign -User Function
  * @n: Character to be checked if positive, zero or negative
  * Return: 1 if +, 0 if 0 and -1 if -
 */
int print_sign(int n)
{
	int num;

	if (n < 0)
	{
		num = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else if (n > 0)
	{
		num = 1;
		_putchar('+');
	}

	return (num);
}
