#include <stdio.h>

/**
  * main - Main function
  * @argc: Number of arguments passed in the command line
  * @argv: Array containing arguments passed.
  * Return: 0
  */

int main(int argc, char **argv)/* **argv is the same as *argv[]*/
{
	while (--argc)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}

