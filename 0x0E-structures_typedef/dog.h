#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Dog data.
 *@name: Name of the dog
 *@age: age of the dog.
 *@owner: owner of the dog.
 *Desctiption: a structure with the name, age and owner of a dog.
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
/*following codes are added in order to compile other files in same directory*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
#endif
