#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
 
    if (n % 5==0)
    {
        n=n/5;
    }
    else
    {
        n=n/5+1;
    }
    printf("%d",n);  
    return 0;
}