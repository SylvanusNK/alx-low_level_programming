#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - creates a struc dog for name age and owner
* @name: pointer to name of the dog
* @age: age of dog
* @onwer: pointer to the gog owner
* Return: void
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
