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
	int i = 0;

	if (str != NULL)
	{
		while(str[i] != '\0')
			i++;
		strdup = malloc(sizeof(char) * i);
		if (strup == NULL)
			return (NULL);
		while (i--)
			strdup[i] = str[i];
		return (strdup);
	}
	return (NULL);
}
