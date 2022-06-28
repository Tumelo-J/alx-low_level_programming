#include "main.h"
#include <stdlib.h>

/**
  * create_array - Function creates an array of chars
  * @size: Size of the array
  * @c: initializing char
  *
  * Return: Pointer to array | NULL if size = 0 or program fails
  */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *s;
	unsigned int i = 0;

	str = malloc(sizeof(char) * 3);
	if (s != NULL)
	{
		for (i = 0; i < size; i++)
			s[i] = c;
		return (s);
	}
	else
		return (NULL);
}

