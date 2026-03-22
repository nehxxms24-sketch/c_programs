#include<stdio.h>
int findsum(int sum,int num);
int main()
{   int num;
	printf("enter 5 digit number:");
	scanf("%d",&num);
	int sum=0;	
	printf("sum of the digits is %d",findsum(sum,num));
}
int findsum(int sum,int num)
{
	int n;
	if(num==0)
	{
		return sum;
	}
	else
	{
		n=num%10;
		sum=sum+n;
		return findsum( sum,num/10);
		
	}
}
