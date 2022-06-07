#include "main.h"
/**
  * _islower -User Function
  * @c: Character to be checked if it is lowercase
  * Return: 1 if lowercase and 0 if other
 */
int _islower(int c)
{
	int ch = "abcdefghijklmnopqrstuvxyz";
	int num;
	int i;

	for (i = 0; i <= 25; i++)
	{
		if (c == ch[i])
			num = 1;
		else
			num = 0;
	}
	return (num);
}
