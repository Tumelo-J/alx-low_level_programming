#include "main.h"

/**
  * _strlen -Finds length of input string, similar to strlen
  * @s: Input string
  * Return: Length of string, int
  */
int _strlen(char *s)
{
	int i;
	
	/* s is the location of the input string in memory => s =&string[0] */
	for(i = 0; (*s != '\0');i++);
	return (i);
}
