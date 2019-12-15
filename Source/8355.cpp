#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    float f;
    cin >>a >>b >>c >>d;
    f=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	cout <<fixed<<setprecision(2)<<f;
    return 0;
}