#include <stdio.h>
void bin(int num);
int main()
{
	int num;
	printf("ENTER A NUMBER:");
	scanf("%d",&num);
	bin(num);	
}
void bin(int num)
{
	int n,b;
	if(num==0)
	{
		return ;
	}
	else
	{
		bin(num/2);
	    printf("%d",num%2);
		
	}
	
}