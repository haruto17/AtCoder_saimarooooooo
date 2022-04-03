//ABC246-c

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
using ll = long long;

#define rep(i,n) for(int i = 0; i < (int)(n);i++)
#define all(x) begin(x), end(x)

int main()
{
	ll n, k, x;
	cin >> n >> k >> x;

	vector<ll>a(n);
	ll ans = 0;
	rep(i, n)
	{
		cin >> a[i];
		ans += a[i];
	}

	ll m = 0;
	rep(i, n) m += a[i] / x;
	
	m = min(m, k);
	ans -= m * x;
	k -= m;

	rep(i, n)a[i] %= x;

	sort(all(a));
	reverse(all(a));

	rep(i, n)
	{
		if (k > 0)
		{
			ans -= a[i];
			k--;
		}
		else break;
	}

	cout << ans << endl;

	return 0;
}