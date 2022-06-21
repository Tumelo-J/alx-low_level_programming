# include "main.h"

/**
  * _memset - function fills pointed to by a pointer with a character
  * @s: Pointer to memory to be filled with characters
  * @b: Character used to fill memory
  * @n: Unsigned interger, memory to be filled in bytes
  *
  * Return: Pointer to memory area filled with char
*/

char _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (*s);
}

