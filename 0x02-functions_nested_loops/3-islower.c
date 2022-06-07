#include "main.h"
/**
  * _islower -User Function
  * @c: Character to be checked if it is lowercase
  * Return: 1 if lowercase and 0 if other
 */
int _islower(int c)
{
	int ch;
	int num;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
			num = 1;
		else
			num = 0;
	}
	return (num);
}
