#include <stdio.h>
#include <stdlib.h>

/**
  * main - Main function
  * @argc: Number of arguments passed in the command line
  * @argv: Array containing arguments passed.
  * Return: 0
  */

int main(int argc, char **argv)/* **argv is the same as *argv[]*/
{
	if (argc ==  3)
	{
		printf("%d\n", atoi(*argv + 1) * atoi(*argv + 2));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

