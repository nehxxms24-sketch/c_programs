#include <stdio.h>
void cal(int year)
{
    int i,j;
    while(year>0)
    {
       if(year>1000)
       {
            printf("m");
            year=year-1000;
       }
       else if(year>=500)
       {
            printf("D");
            year=year-500;
       }
       else if(year>=100)
       {
            printf("C");
            year=year-100;
       }
       else if(year>=50)
       {
            printf("L");
            year=year-50;
       }
       else if(year>=10)
       {
            printf("X");
            year=year-10;
       }
       else if(year>=5)
       {
            printf("v");
            year=year-5;
       }
       else
       {
            printf("I");
            year=year-1;

       }
    }

}
int main()
{
    int year;
    char roman[100];
    printf("Enter the year:");
    scanf("%d",&year);
    void cal(int year);
    cal(year);
}