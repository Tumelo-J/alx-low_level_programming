#include <stdio.h>

/**
 * main - Program Entry
 * Description: Printing combinations of three digit numbers
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = 0; i < 100; i++)
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
	putchar('\n');
	return (0);
}
