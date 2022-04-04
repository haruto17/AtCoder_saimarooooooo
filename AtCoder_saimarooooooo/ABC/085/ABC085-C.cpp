//ABC085-C

#include<iostream>

using namespace std;

#define rep(i,a,b) for(int i = a; i <= b;i++)

int main()
{
	int n, y;
	cin >> n >> y;

	rep(i, 0, n)
	{
		rep(j, 0, n)
		{
			int k = n - i - j;
			if (k >= 0)
			{			
				if (i*10000+j*5000+k*1000==y)
				{
					cout << i << " " << j << " " << k << endl;
					return 0;
				}
			}
		}
	}

	cout << -1 << " " << -1 << " " << -1 << endl;

	return 0;
}