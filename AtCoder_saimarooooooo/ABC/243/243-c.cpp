//ABC243-c

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

#define rep(i,n) for(int i = 0; i < (int)(n);i++)

int main()
{
	int N;
	cin >> N;
	
	vector<int>X(N), Y(N);
	rep(i, N)cin >> X[i] >> Y[i];

	string S;
	cin >> S;

	map<int, vector<int>> mp;
	rep(i, N)
	{
		mp[Y[i]].push_back(i);
	}
	
	for (auto p : mp)
	{
		vector<int> ids = p.second;
		vector<pair<int, char>> ps;
		for (int i : ids)
		{
			ps.emplace_back(X[i], S[i]);
		}
		sort(ps.begin(), ps.end());

		int len = ps.size();

		rep(i, len - 1)
		{
			if (ps[i].second == 'R' && ps[i + 1].second == 'L')
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;

	return 0;
}