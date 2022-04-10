//ABC147-B

#include<iostream>

using namespace std;

#define rep(i,n) for(int i = 0; i < (n);i++)

int main()
{
	string s;
	cin >> s;

	int ans = 0;

	rep(i, s.size())
	{
		if (s[i] != s[s.size() - 1 - i])ans++;
	}

	cout << ans / 2 << endl;

	return 0;
}