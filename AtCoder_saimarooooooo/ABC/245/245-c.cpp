//ABC245-c

#include<iostream>
#include<vector>

using namespace std;

#define rep(i,a,b) for(int i = a; i < b;i++)

int main()
{
	int n, k;
	cin >> n >> k;

	vector<vector<int>> a(2, vector<int>(n));
	rep(i, 0, 2)rep(j, 0, n)cin >> a[i][j];

	vector<vector<bool>> dp(n, vector<bool>(2));
	dp[0][0] = dp[0][1] = true;

	rep(i, 1, n)
	{
		rep(j,0, 2)
		{
			//prev i
			int pi = i - 1;
			rep(pj, 0, 2)
			{
				if (!dp[pi][pj])continue;
				if (abs(a[pj][pi] - a[j][i]) > k)continue;
				dp[i][j] = true;
			}
		}
	}

	rep(j, 0, 2)
	{
		if (dp[n - 1][j])
		{
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;
}