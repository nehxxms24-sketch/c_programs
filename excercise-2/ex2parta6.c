#include <stdio.h>
 void high(double temp[30])
{
	double max;
	int j;
	max=temp[0];
	for(j=1.0;j<30.0;j++)
	{
		if(temp[j]>max)
		{
			max=temp[j];
		}
	}
	printf("highest tmperature is %lf",max);
	
}
void low(double temp[30])
{
	double min;
	int k;
	min=temp[0];
	for(k=1;k<30;k++)
	{
		if(temp[k]<min)
		{
			min=temp[k];
		}
	}
	printf("\nlowest tmperature is %lf",min);
	
}

int main()
{
	double temp[30];
	int i;
	for(i=0;i<30;i++)
	{	
		printf("Enter temperature for day %d:",i);
		scanf("%lf",&temp[i]);
   } 
   void high(double temp[30]);
   void low(double temp[30]);
   high( temp);
   low(temp);
}
