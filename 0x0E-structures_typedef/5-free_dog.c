#include <stdlib.h>
#include "dog.h"

/**
  * free_dog -it frees dogs
  * @d:structure of a dog
  *
  * Return:Void
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
