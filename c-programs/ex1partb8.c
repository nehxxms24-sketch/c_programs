#include <stdio.h>
// to check character
int main()
{
   char x;
   printf("enter a character");//c is given coz of char
   scanf("%c",&x); 
   if(x>=65 && x<=90)
   {
    printf("it's a capital letter");
   }
   else if(x>=97 && x<=122)
   {
    printf("it's a small letter");
   }
   else if(x>=48 && x<=57)
   {
    printf("it's a number");
   }
   else if(0<=x && x<128)
   {
    printf("it's a special character");
    else
    {
        printf("invalid");
    }

   }
}