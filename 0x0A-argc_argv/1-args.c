#include <stdio.h>

/**
  * main - Main function
  * @argc: Number of arguments passed in the command line
  * @argv: Array containing arguments passed.
  * Return: 0
  */

int main(int argc, char **argv)
{	argv[argc] = 'Null';
	argc--;
	printf("%d\n", argc);
	return (0);
}

