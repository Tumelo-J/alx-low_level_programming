#include <stdio.h>

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
		if ((sprintf(str,"%d",i))[0] != (sprintf(str,"%d",i))[1])
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
	}
	putchar('\n');
	return (0);
}
