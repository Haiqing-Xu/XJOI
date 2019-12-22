#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i,j,n,flag;
	cin >>n;
	if (n >= 2)
	{
		cout <<2;
	}
	for (int i = 3; i <= n; i++)
	{
		flag = 0;
		for (int j = 2; j <(sqrt(i+0.01)); j++)
		{
			if (i % j==0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			cout <<' '<<i;
		}

	}
	return 0;
}