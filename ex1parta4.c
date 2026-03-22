#include <stdio.h>

int main()
{
    int i, j, n;

    printf("enter a number to find prime factors: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        int prime = 0;

        // check if i is prime
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                prime = 1;
                break;
            }
        }

        // if i is prime, divide n
        if(prime == 0)
        {
            while(n % i == 0)
            {
                printf(" %d", i);
                n = n / i;
            }
        }
    }
}

