#include "dog.h"
#include <stdio.h>
/**
* print_dog - print given instance of dog struct
* @d: given instance of a dog class
*/

void print_dog(struct dog *d)
{
if (d == 0)
{
return;
}
if (d->name)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
if (d->age)
{
printf("Age: %f\n", d->age);
}
else
{
printf("Age: (nil)\n");
}
if (d->owner)
{
printf("Owner: %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
