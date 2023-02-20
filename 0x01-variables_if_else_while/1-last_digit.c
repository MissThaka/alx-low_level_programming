#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main entry
 * description - last digit
 */
int main(void)
{
	int n;
	int last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("last digit of %i and is greater than 5\n", n, last);
	else if (last  == 0)
		printf ("last digit of %i and is 0\n", n, last);
	else if (last < 6)
		printf("last digit of %i and is les than 6 and not 0\n", n, last);
	return (0);
}
