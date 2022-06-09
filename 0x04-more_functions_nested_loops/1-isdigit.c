#include "main.h"

/**
  * _isdigit - Function checks for number character
  * @c : Function takes int c
  * Return: 1 if number and 0 if other
*/
int _isdigit(int c)
{
	int num = (c >= 48 && c <= 57) ? 1 : 0;

	return (num);
}
