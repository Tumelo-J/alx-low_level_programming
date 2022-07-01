#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Checks if malloc fails
  * @b: memory to be allocated in bytes
  *
  * Return: Pointer to allocated memory
  */

void *malloc_checked(unsigned int b)
{
	if (!malloc_checked && b)
		exit(98);
	return (malloc_checked);
}
