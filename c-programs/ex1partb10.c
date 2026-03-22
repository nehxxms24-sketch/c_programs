#include <stdio.h>
int main()
{
    int x;
    printf("enter the days:");
    scanf("%d",&x);
    if(0<x && x<=5)//fine amount calculation
    {
        printf(" fine is 50 paise");
    }
    else if (6<=x && x<=10)
    {
        printf(" fine is 1 rupees");
    }
    else if (x>10 && x<30)
    {
        printf(" fine is 5 rupees");
    }
    else
    {
        printf("membership is cancelled");
    }

}
