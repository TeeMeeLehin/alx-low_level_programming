#include "dog.h"
/**
* init_dog - function to instantiate dog struct
* @d: an instance of a dog class
* @name: name of dog
* @age: age of the dog
* @owner: name of dog's owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
