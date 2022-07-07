#include "function_pointers.h"
/**
* array_iterator - Function runs function on array elements
* @action: Function Pointer
* @size: Array size
* @array: Array containing integers
* Return: Void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
        while (size--)
        {
                action(*array);
                array++;
        }
}
