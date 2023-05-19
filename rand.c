#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("rand() generates numbers between 0 and %i.\n", RAND_MAX);

	// After each run I will get the same numbers generated
	for (int i = 0; i < 10; i++)
	{
		printf("Random number %i: %i\n", i, rand());
	}

	printf("\n");

	// Use srand() to set seeding for rand()
	srand(time(NULL));

	// time(NULL) returns time since 00:00:00 UTC, January 1, 1970 in seconds
	printf("Time since 00:00:00 UTC, January 1, 1970 in seconds: %ld\n", time(NULL));

	for (int i = 0; i < 10; i++)
	{
		printf("Random number %i after srand() is set: %i\n", i, rand());
	}

	printf("\n");

	// Generate numbers between 0 and 10
	for (int i = 0; i < 10; i++)
	{
		int random = (int) ((double) rand() / ((double) RAND_MAX + 1) * (10 + 1));

		printf("Random number %i from 0 to 10: %i\n", i, random);
	}
}