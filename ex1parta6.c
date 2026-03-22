#include <stdio.h>
int main()
{
	int i,y,num,am;
	for(i=1;i<501;i++)
	{
		num=i;
        am=0;
        int x=i;
		while(x>0)
		{
			y=x%10;
			am=am+(y*y*y);
			x=x/10;
		}
		if(am==num)
		{
			printf("%d\n",num);
		}
	}
}
