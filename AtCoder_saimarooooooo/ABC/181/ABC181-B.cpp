//ABC181-B

#include<iostream>
#include<vector>

using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	vector<pair<ll, ll>> d(n);
	for (int i = 0; i < n; i++) cin >> d[i].first >> d[i].second;

	ll ans = 0;

	for (int i = 0; i < n; i++)
	{
		ans += (d[i].first + d[i].second) * (d[i].second - d[i].first + 1) / 2;
	}

	cout << ans << endl;

	return 0;
}