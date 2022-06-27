#include "main.h"
/**
  * _strncat - Concatinates two strings
  * @dest: Original string
  * @src: String to be appended to dest
  *
  * Return: New dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j <= n)
	{
		if (src[j] != '\0')
			dest[i] = src[j];
			i++;
			j++;
		else
			return (dest);
	}
	return (dest);
}
