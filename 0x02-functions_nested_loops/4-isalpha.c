#include "main.h"
/**
  * _isalpha -User Function
  * @c: Character to be checked if it is lowercase
  * Return: 1 if alphabet  and 0 if other
 */
int _isalpha(int c)
{
	int num = ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ? 1 : 0;

	return (num);

}
