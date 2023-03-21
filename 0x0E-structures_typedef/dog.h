#ifndef DOG_H
#define DOG_H

/**
*struct dog - entry
*@name:member of structure
*@owner:member
*@age:structure member
*/

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;

#endif
