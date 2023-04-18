#include "dog.h"

/**
*init_dog - Initializes a dog variable of type struct dog.
*@struct dog *d: The variable to be initialize.
*@name: The name of the dog.
*@age: Age of the dog.
*@owner: The owner of the dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

 void init_dog(struct dog *d, char *name, float age, char *owner)
{	
	d->name = name;
	d->age = age;
	d->owner = owner;
	
}
