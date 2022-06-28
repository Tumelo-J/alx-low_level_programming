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
	char dupstr;
	char *p;
	int i;

	dupstr = malloc(sizeof(*str));
	for (i = 0; i <= sizeof(str); i++)
		dupstr[i] = str[i];
	if (dupstr == NULL || str == NULL)
		return (NULL);
	p = &dupstr;
	return (p);
}
