#include <stdio.h>
int sum(int li)
{
	int i;
	int y=0;
	for(i=1;i<=li;i++)
	{
		if(i%3==0)
		{
			printf("%d ",i);
			y=y+i;
		}
		else if(i%5==0)
		{
			printf("%d ",i);
			y=y+i;
		}
		else
		{
			printf("");
		}
	}
	printf("=%d",y);
	
	
}

int main()
{
	printf("enter the limit parameter:");
	int li;
	scanf("%d",&li);
	sum(li);
	
}


