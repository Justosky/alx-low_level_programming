Below is a detailed explanation or documentation on what each program on this 
directory is all about. Please take time to read it.

0. dog.h	Defines a new type struct dog with the following elements:
		name, type = char *
		age, type = float
		owner, type = char *

1. 1-init_dog.c	 A function that initialize a variable of type struct dog
		 Prototype: void init_dog(struct dog *d, char *name, float age,
		 char *owner);

2. 2-print_dog.c A function that prints a struct dog
		 Prototype: void print_dog(struct dog *d);
		 Format: see example bellow
		 You are allowed to use the standard library
		 If an element of d is NULL, print (nil) instead of this 
		 element. (if name is NULL, print Name: (nil))
		 If d is NULL print nothing.

3. dog.h	Define a new type dog_t as a new name for the 
		type struct dog.

4. 4-new_dog.c	A function that creates a new dog.
		Prototype: dog_t *new_dog(char *name, float age, char *owner);
		You have to store a copy of name and owner
		Return NULL if the function fails

5. 5-free_dog.c	A function that frees dogs.

