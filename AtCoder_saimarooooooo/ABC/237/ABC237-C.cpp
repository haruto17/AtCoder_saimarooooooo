//ABC237-C
//WA

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

#define all(x) begin(x),end(x)

string erase_a(string x)
{
	while (x.back() == 'a')
	{
		x.pop_back();
	}
	return x;
}

bool check(string x)
{
	while (x.size() > 1)
	{
		if (x.front() != x.back())
		{
			return false;
		}

		x.erase(0, 1);
		x.erase(x.size() - 1, 1);
	}

	return true;
}

int main()
{
	string s;
	cin >> s;

	string rev_s = s;
	reverse(all(rev_s));

	if (s == rev_s)
	{
		cout << "Yes" << endl;
		return 0;
	}
	
	if (s.back() != 'a')
	{
		cout << "No" << endl;
		return 0;
	}
	else if (s.back() == 'a')
	{
		string no_a = erase_a(s);
		
		if (check(no_a))
		{
			cout << "Yes" << endl;
			return 0;
		}
		else if (!check(no_a))
		{
			cout << "No" << endl;
			return 0;
		}
	}
}