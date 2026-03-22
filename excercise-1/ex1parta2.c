#include<stdio.h>
/*a C program that takes
age as input and prints the ticket price*/
int main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age<0)//negative value validation
	{
		printf("wrong intput");
	}
	else//no elif in c
	{
		if(0<=age && age<=12)//children
		{
			printf("ticket amount is rupees 8");
		}
		else if(13<=age && age<=19)//teens
		{
 			printf("ticket amount is rupees 12");
		}
		else if(20<=age && age<=59)//adults
		{
			printf("ticket amount is rupees 15");
		}
		else//elders
		{
			printf("ticket amount is rupees 10");
		}
	}
}
	
