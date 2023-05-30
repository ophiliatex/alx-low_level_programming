#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int a, b, c, d;

if (name == NULL || owner == NULL)
return (NULL);

for (a = 0; name[a] != '\0'; a++)
;
for (b = 0; owner[b] != '\0'; b++)
;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(sizeof(char) * (a + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
for (c = 0; c < a; c++)
new_dog->name[c] = name[c];
new_dog->name[c] = '\0';

new_dog->age = age;

new_dog->owner = malloc(sizeof(char) * (b + 1));
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (d = 0; d < b; d++)
new_dog->owner[d] = owner[d];
new_dog->owner[d] = '\0';

return (new_dog);
}
