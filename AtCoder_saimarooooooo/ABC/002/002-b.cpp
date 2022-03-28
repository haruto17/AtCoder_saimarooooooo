//ABC002-b

#include<iostream>
#include<array>

using namespace std;

#define rep(i,n) for(int i = 0; i < (int)(n);i++)
array<char, 5> vowel = { 'a','i','u','e','o' };

int check(char c)
{
	rep(i, 5)
	{
		if (c == vowel[i])return true;
	}

	return false;
}

int main()
{
	string W;
	cin >> W;

	rep(i, W.length())
	{
		if (!check(W[i]))
		{
			cout << W[i];
		}
	}

	cout << endl;

	return 0;
}