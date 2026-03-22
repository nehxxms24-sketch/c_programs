#include <stdio.h>
float cylinder(float r,float h)
{
	printf(" %.2f\\n", (4.0/3.0) * 3.14 *(r*r)*h);

}
void cube(float a)
{
	printf("%f",a*a*a);
}
void cuboid(float l,float w,float h)
{
	printf("%f",l*w*h);
}
void sphere(float r)
{
	printf(" %.2f\\n", (4.0/3.0) * 3.14 *(r*r*r));

}
float cone(float r,float h)
{
	printf("%.2f\\n", (1.0/3.0) * 3.14 *(r*r)*h);

}
int main()
{
	int x;
	printf("menu");
	printf("\n1=volume of cylinder\n 2=volume of cuboid\n 3=volume of sphere\n 4=volume of cone\n 5= volume of cube");
	printf("\nenter a number:");
	scanf("%d",&x);
	if(x==1)
	{
		float r,h;
		printf("enter radius and height of cylinder");
		scanf("%f %f",&r,&h);
		cylinder(r,h);
	}
	else if(x==2)
	{
		float l,w,h;
		printf("enter length,breadth and height of cylinder:");
		scanf("%f %f %f",&l,&w,&h);
		cuboid(l,w,h);
	}
	else if(x==3)
	{
		float r;
		printf("enter the radius:");
		scanf("%f",&r);
		sphere(r);
	}
	else if(x==4)
	{
		float r, h;
		printf("enter the radius and height of the cone");
		scanf("%f %f",&r,&h);
		cone(r,h);
	}
	else if(x==5)
	{
		float a;
		printf("enter the side");
		scanf("%f",&a);
		cube(a);
	}
	else
	{
		printf("enter coorect option");
	}
}
