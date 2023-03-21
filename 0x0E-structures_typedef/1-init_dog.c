#include "main.h"
#include <stdio.h>

/**
*init_dog - entry point
*@d:pinter to structure
*@name:member
*@age:structure Member
*@owner:member of structure
*Description:function that initialize a variable
*Return:nothing
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)

/*creating memory to store the members of the structure*/
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
