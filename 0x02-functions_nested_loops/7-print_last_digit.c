#include "main.h"
/**
  * print_last_digit - Function Prints last digit of n
  * @n: input num
  * Return: last digit of n
 */
int print_last_digit(int n)
{
	n = (n < 0) ? (-n % 10):(n % 10);

	return (n);
}
