#include "main.h"

/**
 * print_last_digit - Function prototype
 * @n: The number to check
 * Description: Prints the last digit of a number
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	n = (n < 0) ? ((-n) % 10) : (n % 10);
	_putchar(n + '0');

	return (n);
}
