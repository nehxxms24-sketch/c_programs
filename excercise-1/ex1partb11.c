#include <stdio.h>
#include <string.h>
int main()
{
    char y[20]="C123";
    char x[20];
    int i;
    for(i=3; i>0; i--)
    {
        printf("\n Enter password");
        scanf("%s",x);
        if(strcmp(x,y)==0)
        {
            printf("welcome");
            break;
        }
        else
        {
            printf("you have %d attempts left",i-1);
        }


    }
    return 0;
}