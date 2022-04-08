//ABC109-B

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define rep(i,a,b) for(int i = a; i < b;i++)

int main()
{
	int n;
	cin >> n;

	vector<string> w(n);
	rep(i, 0, n) cin >> w[i];

	vector<string> d;
	d.push_back(w[0]);
	
	rep(i, 1, n)
	{
		string now = w[i], prev = d[i - 1];
		if (now.front() == prev.back())
		{
			auto result = find(d.begin(), d.end(), now);
			if (result == d.end())
			{
				d.push_back(now);
			}
			else if (result != d.end())
			{
				cout << "No" << endl;
				return 0;
			}
		}
		else
		{
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
}