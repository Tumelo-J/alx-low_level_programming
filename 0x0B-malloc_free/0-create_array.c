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

	char str = malloc(size);
	char str = {c,};
	char *p;
	p = &str;
	
	if (size == 0)
		return (NULL);
	return (p);
}