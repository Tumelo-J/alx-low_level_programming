#include "main.h"

/**
  * _memcpy - The function copies memory area from src to dest of size n-bytes
  * @dest: Destination memory area
  * @src: Source memory area
  * @n: Memory area size in bytes
  *
  * Return: A pointer pointing to the first element of memory area dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
