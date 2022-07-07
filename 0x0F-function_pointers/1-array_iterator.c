#include "function_pointers.h"
/**
  * array_iterator - Function runs function on array elements
  * @action: Function Pointer
  * @size: Array size
  * 
  * Return: Void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
