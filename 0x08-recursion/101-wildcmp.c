#include "main.h"

/**
 * wildcmp - This function compares two strings recursively
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: Returns an interger 1 if the strings "s1" and "s2" are
 * identical otherwise the function will return 0
 */

int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
	{
	return (1);
	}

	if (*s2 == '*')
	{
	if (wildcmp(s1, s2 + 1))
	{
	return (1);
	}
	if (*s1 != '\0' && wildcmp(s1 + 1, s2))
	{
	return (1);
	}
	return (0);
	}
	if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}


