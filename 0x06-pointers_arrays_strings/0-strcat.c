#include "main.h"

/**
  * _strcat - Concatinates two strings
  * @dest: Original string
  * @src: String to be appended to dest
  *
  * Return: New dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + 1] = src[j];
		j++;
	}
	return (dest);
}
