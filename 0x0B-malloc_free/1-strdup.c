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
	char *strdup = malloc(sizeof(str));

	if (strdup == NULL)
		return (NULL);
	if (str != NULL);
	{
		for (int i = 0; i < sizeof(*strup); i++)
			strdup[i] = str[i];
		return (strdup);
	}
	return (NULL);
}
