#include "main.h"

/**
  * main -Entry point to program
  * Description: Print the alphabet
  * Return: Always returns 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
  * print_alphabet -Entry point to program
  * Description: Prints alphabet
  * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0)
}
