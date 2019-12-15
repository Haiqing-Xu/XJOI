#include <stdio.h>
#include <math.h>
int main()
{
    float f;
    scanf("%f",&f);
    printf("%d\n", (int)floor(f));
    printf("%d\n", (int)ceil(f));
    return 0;
}