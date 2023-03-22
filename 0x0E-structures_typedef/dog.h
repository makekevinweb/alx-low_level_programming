#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog -Dog data.
 * @name: Name of the dog
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Desctiption: a structure with the name, age and owner of a dog.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 *following codes are added in order to compile other files in same directory
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
