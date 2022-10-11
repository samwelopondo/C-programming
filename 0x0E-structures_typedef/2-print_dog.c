#include <stdio.h>
#include <stdlib.h>
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
	
	if(d->name == NULL)
		printf("Name: (nil)");
		
	if(x == NULL)
		printf("Age: (nil)");
	
	if(d->owner == NULL)
		printf("Owner: (nil)");
	
	printf("Name: %s\nAge: %f\nOwner: %s\n",d->name,d->age,d->owner);
	
}
