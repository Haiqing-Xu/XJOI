#include <stdio.h>
int main()
{
    int i,j,k,m,n;
    scanf("%d",&n);
    m=0;
    for (int i = 1; i <=n; i++)
    {
        k=0;
        for (int j = 1; j <=i; j++)
        {
            m=m+1;
            printf("%4d", m);
            k=k+1;
            if (k==i)
            {
                printf("\n");
            }
 
        }      
    }
    return 0;
}