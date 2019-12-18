#include <stdio.h>
int main()
{
	int i,j,n;
	while(scanf("%d",&n) != EOF)
	{
		for (i = 1; i <= 2*n-1; i++)
		{
			if (i<=n)
			{
				for (j= n-i; j >0; j--)
				{
					printf(" ");
				}
				for (j=1; j <= 2*i-1; j++)
				{
					printf("*");
				}
				printf("\n");
			}
			else
			{
				for (j= 1; j <= i-n; j++)
				{
					printf(" ");
				}
				for (j=1; j <= 2*(2*n-i)-1; j++)
				{
					printf("*");
				}
				printf("\n");
			}
			
		}
	}
	return 0;
}