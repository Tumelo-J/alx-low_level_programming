#include "main.h"

/**
  * _strlen -Finds length of input string, similar to strlen
  * @s: Input string
  * Return: Length of string, int
  */
int _strlen(char *s)
{
	int length;
	/* s is the location of the input string in memory => s =&string[0] */
	for (length = 0; s[length] != '\0';length++)
	return (length);
}
