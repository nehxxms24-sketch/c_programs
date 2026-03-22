#include <stdio.h>
int main()
{
    int i, n;
    printf("enter number");
    scanf("%d",&n);
    int a=1,b=2;
    printf("%d %d",a,b);
    for( i=3;i<=n;i++)
    {
        int sum1=0,sum2=0,x;
        x=a;
        while(x>0)
        {
            int di=x%10;
            sum1+=di*di;
            x=x/10;
        }
        x=b;
        while(x>0)
        {
            int bi=x%10;
            sum2+=bi*bi;
			x=x/10;
        }
        int c=sum1+sum2;
        printf("%d",c);
        a=b;
        b=c;
    }
    
}
