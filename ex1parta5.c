#include <stdio.h>
int main()
{
    printf("enter a five digit number to find reverse");
    int num,y,x,rev=0;
    scanf("%d",&num);
    x=num;
    while(num>0) 
    {
        y=num%10;
        rev=rev*10+y;
        num=num/10;
    } 
    printf("%d",rev);
    if(x==rev)
    {
    	printf("reverse is equal");
	}
	else
	{
		printf("not equal");
	}
   
}
