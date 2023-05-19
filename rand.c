#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("Random number %i: %i\n", i, rand());
	}
}