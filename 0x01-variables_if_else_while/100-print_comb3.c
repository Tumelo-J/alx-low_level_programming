#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Program Entry
 * Description: Printing combinations of three digit numbers
 * Return: 0
 */
int main(void)
{
	int i;
	char str[3];

	for (i = 0; i < 100; i++)
	{
		char str = itoa(i, str, 10);

		if (str[0] != str[1])
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
