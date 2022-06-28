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
	long unsigned int i = 0;

	if (str != NULL)
	{
		strdup = malloc(sizeof(*str));
		if (strdup == NULL)
			return (NULL);
		while(i <= sizeof(*str))
		{
			strdup[i] = str[i];
			i++;
		}
		return (strdup);
	}
	return (NULL);
}
