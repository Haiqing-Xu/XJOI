#include <stdio.h>
int main()
{
    int i,j;
    for (int i = 1; i <=9; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d*%d=%2d", j,i,j*i);
            if (j!=i)
            {
                printf(" ");
            }
            else
                if (i<9)
                {
                    printf("\n");
                }
        }      
    }
    return 0;
}