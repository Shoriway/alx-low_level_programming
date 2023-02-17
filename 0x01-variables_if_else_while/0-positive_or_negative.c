#include <stdlib.h>
#include <time.h>
/* A program that will assign a random number to the variable everytime it is executed */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
