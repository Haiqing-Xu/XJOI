#include <iostream>
using namespace std;
int main()
{
    int i,j,n,s;
    cin >> n;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        j=i;
        while(j / 10 >0)
        {
            s=s+ j % 10;
            j=j / 10;
        }
        s=s+j;
    }
    cout <<s;
    return 0;
}