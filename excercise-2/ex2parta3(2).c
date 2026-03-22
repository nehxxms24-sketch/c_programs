#include <stdio.h>

int factorial(int n)
{	int fact=1;
	if ((n==0) || (n==1))
	{	fact=1;
		return fact;
	}
	fact=n*factorial(n-1);
	return fact;
}

float power(float base,int exponent)
{	float value=1;int i;
	for(i=1;i<=exponent;i++)
	{	value *= base;
	}
	return value;
}

float sinx(float x)
{	float sin=0;
	sin= x-(power(x,3)/factorial(3))+(power(x,5)/factorial(5))-(power(x,7)/factorial(7));
	return sin;	
}

int main()
{	float x;
	printf("Input angle in radians:\t");
	scanf("%f",&x);
	printf("Sin of %f is %f",x,sinx(x));
}
