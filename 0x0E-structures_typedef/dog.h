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

typedef struct dog dog_t;

void init_dog(struct dog *t, char *name, float age, char *owner);
void print_dog(struct dog *t);
dog_t *n_dog(char *name, float age, char *owner);
void free_dog(dog_t *t);

#endif /* struct dog */
