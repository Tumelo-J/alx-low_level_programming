#include "main.h"
#include <stdlib.h>

/**
  * _strdup  - Function duplicates a string
  * @str: String to be duplicated
  *
  * Return: Pointer to array | NULL if size = 0 or program fails
  */

char *_strdup(char *str)
{

	int size;
	char strdup[size];
	char *p;

	if (str != NULL)
	{
		size = malloc(sizeof(*str));
		strdup = *str;
	}
	p = &strdup;
	return (p);
}
