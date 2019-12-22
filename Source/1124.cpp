#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin >> n;
    for (int i = 15; i <= n; ++i)
    {
        if (i % 3==0)
        {
            j=i;
            while(j > 0)
            {
                if (j % 10 ==5)
                {
                    cout << i << endl;
                    break;
                }
                else
                {
                    j=j / 10;
                }
            }
        }
    }
    return 0;
}