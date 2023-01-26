#include "function_pointers.h"

/**
  * int_index-it searches for an integer
  * @array:array of size
  * @size:size of the array
  * @cmp:compare function to be used
  *
  * Return:index of the first element for which the cmp function does not
  *return 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);

				a++;
			}
		}
	}

	return (-1);
}
