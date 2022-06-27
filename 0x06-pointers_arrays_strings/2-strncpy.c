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

	while (j < n)
	{
		if (src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		else
		{
			dest[j] = '\0';
			return (dest);
		}
	}
	return (dest);
}
