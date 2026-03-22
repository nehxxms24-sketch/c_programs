#include <stdio.h>
#include <math.h>
void fact(int x,int y)
{
	float s=0;
	int i,f;
	for(i=1;i<=y;i+=4)
	{
		f=i+2;
		double s1=0,s2=0;
		double s11=0,s22=0;
		s1=pow(x,i);
		s2=pow(x,f);
		int j,h;
		double k=1,l=1;
		for( j = 1; j <= i; j++)
		{
			k=k*j;
		}
		for(h=1;h<=f;h++)
		{
			l=l*h;
		}
		s11=s1/k;
		s22=s2/l;
		printf(" \n%d-%d ",s11,s22);
		s+=s11-s22;	
	}
	printf("sin(%d) = %f",x,s);
}
int main()
{
	int x,y;
	printf("enter a number and limit value for sin series");
	scanf("%d %d",&x,&y);
	fact(x, y);
}

