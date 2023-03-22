#include "dog.h"
#include <stdio.h>
/**
 *init_dog - initalizes a variable of type struct dog
 *@d: this is the name of variable
 *@name: this for member variable name in struct dog
 *@age: member varible age
 *@owner: member variable for owner's name
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
