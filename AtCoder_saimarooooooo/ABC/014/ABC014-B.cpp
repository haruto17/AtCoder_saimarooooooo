//ABC014-B

#include<iostream>
#include<vector>

using namespace std;
#define rep(i,n) for(int i = 0; i < (n);i++)

int main()
{
	int n, x;
	cin >> n >> x;

	vector<int> a(n);
	rep(i, n) cin >> a[i];

	int ans = 0;
	
	rep(i, n)
	{
		if (x % 2 == 1)ans += a[i];
		x /= 2;
	}

	cout << ans << endl;

	return 0;
}