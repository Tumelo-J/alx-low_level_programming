#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - Function prints a name
  * @name: Poiter to name array
  * @f: Function pointer
  *
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
