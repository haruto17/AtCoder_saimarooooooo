//ABC241-B

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

#define rep(i,n) for(int i = 0; i < n;i++)

int main()
{
	int n, m;
	cin >> n >> m;

	map<int, int> A;
	vector<int> B(m);
	rep(i, n)
	{
		int a;
		cin >> a;

		A[a]++;
	}
	rep(i, m)cin >> B[i];

	bool ans = true;

	rep(i, m)
	{
		auto result = A.find(B[i]);

		if (result == A.end())
		{
			ans = false;
			continue;
		}
		else if (A[B[i]] == 0)
		{
			ans = false;
			continue;
		}
		else A[B[i]]--;
	}

	if (ans)cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}