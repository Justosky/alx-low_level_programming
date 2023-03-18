#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*This program prints a random number a tells us if the
*number is positive or negative
*Return: Always 0 (SUCCESS)
*/


int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if(n == 0)
		{printf ("%i is zero\n",n);}

        else if (n > 0)
		{printf ("%i is positive\n",n);}

        else 
		{printf ("%i is negative\n",n);}
	
	return (0);
}
