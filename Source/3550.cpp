#include <iostream>
using namespace std;
int main()
{
    int n,s;
    cin >> n;
    s = 0;
    while(n>1)
    {
        if(n % 2 == 0)
        {
            n=n / 2;
            s=s + 1;
        }
        else
        {
            n=n*3+1;
            s=s + 1;
        }
    }
    cout << s;
    return 0;
}