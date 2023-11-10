#include "function_pointers.h"
#include <stddef.h>

/**
 *array_iterator - function that executes function given as a parameter
 *@array: the array
 *@size: size of array
 *@action: function to perform on each alement
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
