#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 */

void print_dog(struct dog *d)
{
	float *x ;
	x = &(*d).age;
	if (d == NULL)
		printf("");
	else
	{	
		if(d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name %s\n",d->name);
		if(x == NULL)
			printf("Age: (nil)");
		else
			printf("Age %2.1f\n",d->age);
		if(d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner %s\n", d->owner);
	}
}

