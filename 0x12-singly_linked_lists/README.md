This is a documentation on the functions of the varous program within this 
directory. All programs here are to used as a practical approach to master 
Data structures especially Single linked list.

The programs are as follows:

0-print_list.c	-	A function that prints all the elements of a 
			list_t list.
			Prototype: size_t print_list(const list_t *h);
			Return: the number of nodes
			If str is NULL, print [0] (nil);

1-list_len.c	-	A function that returns the number of elements in a 
			linked list_t list.
			Prototype: size_t list_len(const list_t *h);

2-add_node.c	-	A function that adds a new node at the beginning of a 
			list_t list.
			Prototype:
			list_t *add_node(list_t **head, const char *str);
			Return: the address of the new element, 
			or NULL if it failed.
			str needs to be duplicated.

3-add_node_end.c -	A function that adds a new node at the end of 
			a list_t list.
			Prototype: 
			list_t *add_node_end(list_t **head, const char *str);
			Return: the address of the new element, 
			or NULL if it failed.

4-free_list.c	-	A function that frees a list_t list.
			Prototype: void free_list(list_t *head);
			str needs to be duplicated.	
