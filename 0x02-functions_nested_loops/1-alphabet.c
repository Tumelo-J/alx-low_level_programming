#include "main.h"
/**
  * print_alphabet -Entry point to program
  * Description: Prints alphabet
  * Return: Nothing -Null
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return;
}
