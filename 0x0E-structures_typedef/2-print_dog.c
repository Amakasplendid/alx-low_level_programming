#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints
 * @d: pointer
 * Return:0
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name:%s\n", d->name : "(nil)");
		printf("Age:%f\n", d->age : 0);
		printf("Owner:%s\n", d->owner : "(nil)");
	}
}
