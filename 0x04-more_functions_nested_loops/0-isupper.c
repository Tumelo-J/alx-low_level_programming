#include "main.h"

/**
  * _isupper - Function checks for uppercase character
  * @c : Function takes int c
  * Return : 1 if uppercase and 0 if other
*/
int _isupper(int c)
{
	int num = (c >= 65 && c <= 90) ? 1 : 0;

	return (num);
}
