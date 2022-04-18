//ABC021-B

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define rep(i,n) for(int i = 0; i < n;i++)

int main()
{
	int n;
	cin >> n;
	int a, b;
	cin >> a >> b;
	int k;
	cin >> k;

	vector<int>P(k);
	rep(i, k) cin >> P[i];

	P.push_back(a);
	P.push_back(b);
	sort(P.begin(), P.end());
	
	rep(i, P.size() - 1)
	{
		if (P[i] == P[i + 1])
		{
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}