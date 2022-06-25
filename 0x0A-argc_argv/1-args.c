#include <stdio.h>

/**
  * main - Main function
  * @argc: Number of arguments passed in the command line
  * @argv: Array containing arguments passed.
  * Return: 0
  */

int main(int argc, char const **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

