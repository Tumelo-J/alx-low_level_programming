# include "main.h"
# include <stdlib.h>

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
	int *p;
	unsigned int i, j, k;
	/* Calculating the length of s1 and s2 */
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && (j < n))
		j++;
	k = i + j;
	p = (int *) malloc(i + j + 1);
	if (p != NULL)
	{
		p[k + 1] = '\0';
		while (k > i)
		{
			p[k] = s2[j];
			k--;
			j--;
		}
		while (k--)
		{
			p[k] = s1[i];
			i--;
		}
		return (p);
	}
	return (NULL);
}
