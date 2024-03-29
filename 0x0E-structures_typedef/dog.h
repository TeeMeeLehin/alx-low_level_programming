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

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif /* DOG_H */
