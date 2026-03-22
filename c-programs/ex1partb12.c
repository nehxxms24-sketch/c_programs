#include <stdio.h>
int main()
{
    int balance=1000;
    int x;
    while(balance>0)
    {
        printf("enter amount to withdraw:");
        scanf("%d",&x);
        balance=balance-x;
        if(balance<=100)
        {
            printf("minimum balance reached\n");
            break;
        }
    }

}