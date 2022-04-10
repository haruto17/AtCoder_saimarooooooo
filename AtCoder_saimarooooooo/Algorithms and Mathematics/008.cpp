//008 - Brute Force 1

#include<iostream>

using namespace std;
#define rep(i,n) for(int i = 1; i <= (n);i++)

int main()
{
	int n, s;
	cin >> n >> s;

	int ans = 0;

	rep(i, n)
	{
		rep(j, n)
		{
			if (i + j <= s)ans++;
		}
	}

	cout << ans << endl;

	return 0;
}