#include "main.h"

/**
 *set_string -  A function that sets the value of a pointer to a char.
 *@s: A pointer to a character pointer.
 *@to: A character pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
