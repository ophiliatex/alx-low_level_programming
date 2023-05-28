#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog my_dog;

void init_dog(struct dog *t, char *name, float age, char *owner);
void print_dog(struct dog *t);
my_dog *n_dog(char *name, float age, char *owner);
void free_dog(my_dog *t);

#endif /* struct dog */
