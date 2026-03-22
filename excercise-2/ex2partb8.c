#include <stdio.h>
int check(int x)
{
   int i, j, y=0;

   j = x % 10;  
   x = x / 10;
   if(j==5)
   {
    y=1;
   }
   while (x > 0)
   {
        i = x % 10;

        if (i == 5)
            y++;
        else
            y = 0;

        if (y == 3)
            return 1;

        j = i;
        x = x / 10;
   }

   return 0;
}

int main()
{
    printf("Enter a number: ");
    int x;
    scanf("%d", &x);

    printf("%d", check(x));
}
