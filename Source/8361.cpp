#include <iostream>
using namespace std;
int main()
{
	int a,b,c,w;
	cin >>a >>b >>c;
	w=a+b+c;
	if (a<b)
	{
		a=b;
	}
	if (a<c)
	{
		a=c;
	}
	cout <<w-a;
	return 0;
}