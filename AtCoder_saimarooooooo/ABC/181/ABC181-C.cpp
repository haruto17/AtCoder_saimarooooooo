//ABC181-C

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> xy(n);
	for (int i = 0; i < n; i++) cin >> xy[i].first >> xy[i].second;

	bool check = false;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				auto a = xy[j].first - xy[i].first;
				auto b = xy[j].second - xy[i].second;
				auto c = xy[k].first - xy[i].first;
				auto d = xy[k].second - xy[i].second;

				if (a * d == b * c)check = true;
			}
		}
	}

	if (check)cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}