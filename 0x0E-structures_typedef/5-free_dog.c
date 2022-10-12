#include <stdio.h>
#include "dog.h"

/**
 *free_dog - Frees allocated memory
 *@d: struct dog memory to be freed
 *
 */
void free_dog(dog *d)
{
	if (d != NULL)
		free(d);
}
