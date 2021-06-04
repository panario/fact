#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
	int fact = n;
 	if (n<=1)
		return 1;
	else
		do 
			{fact=fact*(n-1); }
		while (n-->2);

	return fact;
}

int main()
{
	int x;
	
	printf("Enter n: ");
	scanf("%d", &x);

	if (x<0)
		printf("n must be positive\n");
	else
		printf("n! = %d\n", fact(x));

	return EXIT_SUCCESS;
	
}
