#include "function_pointers.h"

/**
  * array_iterator-executes a function given as a parameter on each element of
  * an array
  * @array:array of ints
  * @size:size of the array
  * @action:pointer to the function applied
  *
  * Return:Void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
