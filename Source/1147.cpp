#include <iostream>
using namespace std;
int main()
{
    int n,s;
    cin >> n;
    s = 0;
    while(n / 10 >0)
    {
        s=s+ n % 10;
        n=n / 10;
    }
    cout << s+n;
    return 0;
}