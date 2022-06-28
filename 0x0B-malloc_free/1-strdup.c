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
	char *strdup;

	if (str != NULL)
	{
		strdup = malloc(sizeof(*str));
		if (strup == NULL)
		{
			return (NULL);
		}
		strdup = str;
	}
	return (strdup);
}
