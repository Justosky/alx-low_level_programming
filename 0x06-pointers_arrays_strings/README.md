I will try as much I can to explain in details the functions of all programs in this directory.

1. A function that concatenates two strings.
Prototype: char *_strcat(char *dest, char *src);This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the 
end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest.

2. A function that concatenates two strings.
Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest.

3. A function that copies a string.
Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy.

4. A function that compares two strings.
Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp.

5. A function that reverses the content of an array of integers.
Prototype: void reverse_array(int *a, int n);
Where n is the number of elements of the array.

6. A function that changes all lowercase letters of a string to uppercase.
Prototype: char *string_toupper(char *);

7. A function that capitalizes all words of a string.
Prototype: char *cap_string(char *);
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), 
{, and }

8. A function that encodes a string into 1337.
Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1
Prototype: char *leet(char *);
With only one if statement,
With only two loops,
Without a switch statement,
And no ternary operation used.

9. A function that encodes a string using rot13.
Prototype: char *rot13(char *);
You can only use if statement once in your code
You can only use two loops in your code
You are not allowed to use switch
You are not allowed to use any ternary operation.

10. A function that prints an integer.
Prototype: void print_number(int n);
You can only use _putchar function to print
You are not allowed to use long
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values.

12. a function that adds two numbers.
Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
Where n1 and n2 are the two numbers
r is the buffer that the function will use to store the result
size_r is the buffer size
The function returns a pointer to the result
You can assume that you will always get positive numbers, or 0
You can assume that there will be only digits in the strings n1 and n2
n1 and n2 will never be empty
If the result can not be stored in r the function must return 0

13. a function that prints a buffer.
Prototype: void print_buffer(char *b, int size);
The function must print the content of size bytes of the buffer pointed by b
The output should print 10 bytes per line
Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
Each line ends with a new line \n
If size is 0 or less, the output should be a new line only \n
You are allowed to use the standard library
The output should look like the following example, and formatted exactly the same way:
