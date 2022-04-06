//ABC237-C
//AC

#include<iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int n = s.size();
	int l = 0, r = n - 1;

	//文字列の両端がaのとき、カーソルを進める
	while (l < r && s[l] == 'a' && s[r] == 'a')
	{
		++l, --r;
	}

	//文字列の右端だけがaのとき,カーソルを進める
	while (l < r && s[r] == 'a')--r;
	
	//両端が同じ文字のとき、カーソルを進める
	while (l < r && s[l] == s[r])
	{
		++l, --r;
	}

	if (l >= r) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}