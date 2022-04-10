//007 Number of Multiples 1

#include<iostream>

using namespace std;

#define rep(i,n) for(int i = 1; i <= (int)(n);i++)

int main()
{
	int n, x, y;
	cin >> n >> x >> y;

	int ans = 0;

	rep(i, n)
	{
		if (i % x == 0 || i % y == 0) ans++;
	}

	cout << ans << endl;

	return 0;
}