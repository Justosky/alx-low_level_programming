These are the explanation to the function of the below C programs found in this directory

0-print_name.c		A function that prints a name.
			Prototype: 
			void print_name(char *name, void (*f)(char *));

1-array_iterator.c	a function that executes a function given as a parameter 			on each element of an array.
			Prototype:
			void array_iterator
			(int *array, size_t size, void (*action)(int));
			where size is the size of the array
			and action is a pointer to the function you need to use
