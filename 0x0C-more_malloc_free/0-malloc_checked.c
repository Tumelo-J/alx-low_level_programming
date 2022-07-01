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
	char *p = malloc(b);

	if (p == NULL)
		return (98);
	return (p);
}
