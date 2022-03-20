//ABC220-c

#include<iostream>
#include<vector>
#include<numeric>

using namespace std;
using ll = long long;

int main()
{
	ll N;
	cin >> N;
	
	vector<ll> A(N);
	for (int i = 0; i < N; i++)cin >> A[i];

	ll X;
	cin >> X;

	ll sum = accumulate(A.begin(), A.end(), 0ll);
	ll P = X / sum;

	//Ø‚èã‚°
	ll sumb = P * sum;

	ll ans = P * N;

	for (ll val : A)
	{
		sumb += val;
		ans++;

		if (sumb > X) break;
	}

	cout << ans << endl;

	return 0;
}