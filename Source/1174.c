#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,n,T,flag;
    scanf("%d",&T);
    for (i = 1; i <= T; i++)
    {	
    	scanf("%d",&n);
    	flag=0;
    	if (n==1)
    	{
			flag=1;
    	}
		if (n>2)
		{
			for (j = 2; j< sqrt(n+0.01); j++)
    		{
    			if (n % j==0)
    			{
    				flag=1;
    				break;
    			}
    		}
		}
    	
    		if (flag==1)
    		{
    			printf("No\n");
    		}
    		else
    		{
    			printf("Yes\n");
    		} 		
    }
    return 0;
}