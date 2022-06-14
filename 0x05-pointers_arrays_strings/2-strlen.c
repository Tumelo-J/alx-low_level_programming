#include "main.h"

/**
  * _strlen -Finds length of input string, similar to strlen
  * @s: Input string
  * Return: Length of string, int
  */
int _strlen(char *s)
{
	int i;

	for(i = 0; ((*s)[i] != '\0');i++);
	return (i);
}