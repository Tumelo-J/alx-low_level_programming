#include "function_pointers.h"
/**
  * print_name - Function prints a name
  * @name: Poiter to name array
  * @f: Function pointer
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
