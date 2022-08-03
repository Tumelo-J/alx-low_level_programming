#include <stddef.h>
#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, unsigned int size, void (*action)(int));

#endif
