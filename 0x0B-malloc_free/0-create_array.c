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
	char *str;
	unsigned int i = 0;

	str = (char *) malloc(sizeof(char) * size);
	if (str != NULL)
	{
		for (i = 0; i < size; i++)
			str[i] = c;
		return (str);
	}
	else
		return (NULL);
}

