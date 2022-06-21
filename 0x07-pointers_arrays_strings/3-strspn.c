#include "main.h"

/**
 * _strspn - Function finds segment memory starting at memory address 'accept'
 * @s: Memory segment
 * @accept: Starting memory address 
 *
 * Return: Number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] = accept)
		{
			n++;
		}
	}
	return (n);
}
