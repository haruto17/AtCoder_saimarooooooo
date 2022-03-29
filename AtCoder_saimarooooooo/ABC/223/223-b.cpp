//ABC223-b

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define rep(i,n) for(int i = 0; i <(int)(n);i++)

int main()
{
	string S;
	cin >> S;

	vector<string> d;
	rep(i, S.length())
	{
		d.push_back(S);

		char c = S[0];
		S.erase(0, 1);
		S += c;
	}
		
	sort(d.begin(), d.end());

	cout << d.front() << endl;
	cout << d.back() << endl;

	return 0;
}