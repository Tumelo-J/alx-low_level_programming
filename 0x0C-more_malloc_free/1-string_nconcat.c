#include "main.h"
#include <stdlib.h>

int len_(*s)
{
	unsigned int i;

	while (*s != '\0')
		i++;
	return (i);
}
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
	unsigned int len_s1 = len_(s1);
	char *p = malloc(len_s1 + len_(s2) + 1);

	if (p != NULL)
	{
		for (; *s1 != '\0'; s1++, p++)
			*p = *s1;
		if (n >= len_s2)
		{
			for (; *s2 != '\0'; s2++, p++)
				*p = *s2;
		}
		else
		{
			while (n--)
			{
				*P = *s2;
				p++;
				s2++;
			}
		}
		*p = '\0';
		return (p);
	}
	return (NULL);
}
