//ABC182-C
//bit‘S’Tõ‚Å‰ğ‚­

#include<iostream>
#include<string>

using namespace std;
using ll = long long;

int main()
{
	string n;
	cin >> n;

	int ans = n.length();

	for (int mask = 1; mask < (1 << n.size()); ++mask)
	{
		int c = 0;
		string s;

		for (int bit = 0; bit < n.size(); ++bit)
		{
			if (mask & (1ll << bit))
			{
				s += n[bit];
			}
			else c++;
		}
		
		if (stoll(s) % 3 == 0)
		{
			ans = min(ans, c);
		}
	}
	
	if (ans == n.length())cout << -1 << endl;
	else cout << ans << endl;

	return 0;
}