#include <stdio.h>

int main()
{
	int a, b, sum;
	float sqr;
	
	printf("Enter the first measurement (length): ");
	scanf("%d", &a);
	
	printf("Enter the second measurement (width): ");
	scanf("%d", &b);
	
	sum=add(a,b);
	printf("the sum of the two measurements is: %d\n", sum);
	
	printf("The value in the variable sum is: %d\n", sum);
	
	sqr=squareRoot(sum);
	printf("The square root measurement of the new house floor plan is: %f\n", sqr);
	
	return 0;
}

int add(int x, int y)
{
	return x+y;
}

int squareRoot(int x)
{
	return x*x;
}
