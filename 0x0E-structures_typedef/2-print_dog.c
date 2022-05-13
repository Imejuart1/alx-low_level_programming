#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints dog data
 * @d: dog struct
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
1-init_dog.c printf("Name: %s\nAge: %f\nOwner: %s\n",
1-init_dog.c (*d).name != NULL ? d->name : "(nil)",
1-init_dog.c (*d).age,
1-init_dog.c (*d).owner != NULL ? d->owner : "(nil)");
}
}
