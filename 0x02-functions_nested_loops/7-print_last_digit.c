#include "main.h"
#include <stdlib.h>
/**
  * print_last_digit - Function Prints last digit of n
  * @n: input num
  * Return: last digit of n
 */
int print_last_digit(int n)
{
	_putchar(n + '0');
	return (abs(n) % 10);
}
