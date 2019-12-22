#include <iostream>
using namespace std;
int main()
{
    int s;
    float m,n,t;
    cin >> n;
    m = 2;
    s = 1;
    t=2;
    while(m < n)
    {
        t=t*0.98;
        m = m + t;
        s = s + 1;
    }
    cout << s;
    return 0;
}