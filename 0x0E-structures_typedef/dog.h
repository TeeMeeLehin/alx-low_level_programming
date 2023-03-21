#ifndef DOG_H
#define DOG_H

/**
* struct dog - an instance of a dog class
* @name: name of dog
* @age: age of the dog
* @owner: name of dog's owner
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);





#endif /* DOG_H */
