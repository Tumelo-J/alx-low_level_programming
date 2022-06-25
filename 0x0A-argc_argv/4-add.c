#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Main function
  * @argc: Number of arguments passed in the command line
  * @argv: Array containing arguments passed.
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 1)
	{
		if (argc < 1)
		{
			printf("0\n");
			return (0);
		}
		while(argc--)
		{
			if (!isdigit(*argv++))
			{
				printf("Error\n");
				return (1)
			}
			sum += (*argv++);
		}
		printf("%d\n", sum)
		return (0)
}
