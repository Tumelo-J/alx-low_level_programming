#include "main.h"

/**
  * _strchr - Function checks the occurance of a character in a string
  * @s: String from which occurance of c is checked
  * @c: The character whose occurance in s is checked
  *
  * Return: Pointer to the first occurance of character
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
