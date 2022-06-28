#include "main.h"
#include <stdlib.h>

/**
  * str_concat  - Function concatinates one string to another
  * @s1: String 1
  * @s2: String 2
  *
  * Return: Pointer to array | NULL
*/

char *str_concat(char *s1, char *s2)
{
	int i, j , y = 0;
	char *newstr;

	if (s1 !=  NULL && s2 != NULL)
	{
		while (s1[i] != '\0')
			i++;
		while (s2[j] != '\0')
			j++;
		y = i + j;
		newstr = malloc(sizeof(char) * (i + j + 1));
		newstr[y+1] = '\0';
		while (y > i)
		{
			newstr[y] = s2[j];
			j--;
			y--;
		}
		while (y --)
		{
			newstr[y] = s1[i];
			i--;
		}
		return (newstr);
	}
	return (NULL);
}
