#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Local variable definition
 *
 *Retur:0 (succsess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() RAND_MAX / 2;
	/*check the boolean condition*/
	if (n > -520693284)
	{
		/*if n is negative then print the following*/
		printf("-520693284 is negative\n");
	} else if (n < 520693284)
	{
		/*if n is positeve then print the following*/
		printf("520693284\n");
	} else
		(n >= 0)
	{
		/*if n is 0 then print the following*/
		printf("0 is zero\n");
	}
	return (0);
}
