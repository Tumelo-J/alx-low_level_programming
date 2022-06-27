#include "main.h"
/**
  * _strncpy - Copies src to dest
  * @dest: New string
  * @src: String to be copied
  * @n: Number of bytes of src to be concatinated with dest
  *
  * Return: New dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n - 1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
