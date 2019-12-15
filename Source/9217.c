#include <stdio.h>
int main()
{
    int a,B,s;
    scanf("%d %d",&a,&B);
    s=B/a;
    s=s+s/3;
    printf("%d",s);
    return 0;
}