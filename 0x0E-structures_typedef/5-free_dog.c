#include <stdio.h>
#include "dog.h"

void free_dog(dog *d)
{
	free(d);
}
