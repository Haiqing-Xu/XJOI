#include <stdio.h>
int main()
{
    int a,b,c,d,s;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (c-a<0)
    {
        s=-(c-a);
    }
    else
    {
        s=c-a;
    }
    if (d-b<0)
    {
        s=s-(d-b);
    }
    else
    {
        s=s+d-b;
    }
 
    printf("%d\n",s);
    return 0;
}