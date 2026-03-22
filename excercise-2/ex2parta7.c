#include <stdio.h>
void se(int x,int num[25])
{
	int j;
	int count=0;
	for(j=0;j<25;j++)
	{
		if(num[j]==x)
		{
			count=count+1;
		}
		else
		{
			count=count+0;
		}
	}
	printf(" the given number %d is present %d times",x,count);
}
int main()
{
	int x,i;
	int num[25];
	for(i=0;i<25;i++)
	{
		printf("enter a number %d:",i+1);
		scanf("%d",&num[i]);
	}
	printf("enter a number to search:");
	scanf("%d",&x);
	se(x,num);	
}
