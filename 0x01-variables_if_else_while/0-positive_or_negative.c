#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main entery point 
 *
 * discription : postive or nagitive 
 *
 * retutn 0 (sucess)*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0 )
		printf("%i is postive\n",n)
	else if (n == 0 )
		printf("%i is zero\n",n)
	else 
		print("%i is negative\n",n)
	return (0);
}
