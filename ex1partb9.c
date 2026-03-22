#include <stdio.h>
#include <string.h>// need this to compare strings
int main()
{
    int age;
    char gender[7];//it's basically string
    char status[30];
    char place[30];
    printf("enter the age:");
    scanf("%d",&age);
    printf("enter the gender:");//female or male
    scanf("%s",&gender);
    printf("enter the status:");//health status
    scanf("%s",&status);
    printf("enter the place:");//village or city
    scanf("%s",&place);
    if(age>25 && age<35 && strcmp(place,"city")==0 && strcmp(status,"excellent")==0 && strcmp(gender,"male")==0)
    {//strcmp() function is used to compare
        printf(" premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs. ");
    }
    else if(age>25 && age<35 && strcmp(place,"city")==0 && strcmp(status,"excellent")==0 && strcmp(gender,"female")==0)
    {
        printf(" premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh");
    }
    else if(age>25 && age<35 && strcmp(place,"village")==0 && strcmp(status,"poor")==0 && strcmp(gender,"male")==0)
    {
       printf(" premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000");
    }
    else
    {
        printf("cannot be insured");
    }

}