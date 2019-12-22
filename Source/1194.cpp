#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int c,i;
	long long n;
	while(cin >> n)
	{
		c=2;
		for (int i = 2; i <sqrt(n+0.01); i++)
		{
			if (n % i==0)
			{	
				if ((n / i)==i)
					c=c+1;
				else
					c=c+2;
			}
			if (c==4)
			{
				break;
			}
		}
		if (c==3)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}