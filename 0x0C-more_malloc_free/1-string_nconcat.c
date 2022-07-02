#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - Function concatinates two strings
  * @s1: First string
  * @s2: Second string
  * @n: Number of bytes of s2 to be concatinated with s1
  *
  * Return: Pointer to newly allocated memory
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *p;

	while (*s1 != '\0')
		i++;
	while (*s2 != '\0')
		j++;

	(n > j) ? (p = malloc(i + j + 1)) : (p = malloc(n + j));

	if (p != NULL)
	{
		for (; *s1 != '\0'; s1++, p++)
			*p = *s1;
		if (n > j)
		{
			for (; *s2 != '\0'; s2++, p++)
				*p = *s2;
		}
		else
		{
			while (n--)
			{
				*p = *s2;
				p++;
				s2++;
			}
		}
		*p = '\0';

	}
	return (NULL);
}
