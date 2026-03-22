#include <stdio.h>
int main()
{
	int i;
	float amt;
	float x;
	printf("1=cola(Rs 2)");
	printf("\n2=chips(Rs 1.5)");
	printf("\n3=candy(Rs 1)");
	scanf("%d %f",&i ,&amt);
	switch(i)
	{
		case 1:
			if(amt>=2)
			{
				x=amt-2;
				printf("change:%f",x);
				break;
			}
			else
			{
				x=2-amt;
				printf("amount needed:%f",x);
				break;
			}
		case 2:
			if(amt>=1.5)
			{
				x=amt-1.5;
				printf("change:%f",x);
				break;
			}
			else
			{
				x=1.5-amt;
				printf("amount needed:%f",x);
				break;
			}
		case 3:
			if(amt>=1)
			{
				x=amt-1;
				printf("change:%f",x);
				break;
			}
			else
			{
				x=1-amt;
				printf("amount needed:%f",x);
				break;
			}
		default:
			printf("default");
			break;			
	}
	
}
