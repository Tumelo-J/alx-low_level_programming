#include "main.h"
/**
  * _islower() -User Function
  * Description: Determines if input is lowercase or uppercase.
  * Return: 1 if lowercase and 0 if other
 */
int _islower(int c)
{
	char ch;
	int num;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			num = 1;
		}
		else
		{
			num = 0;
		}
	return (num);
}
