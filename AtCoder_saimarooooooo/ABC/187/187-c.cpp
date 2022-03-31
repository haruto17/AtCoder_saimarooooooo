//ABC187-c
//TLE

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define rep(i,n) for(int i = 0; i < (int)(n);i++)

int main()
{
	int N;
	cin >> N;

	string S;
	int count = 0;
	vector<string> v;
	rep(i, N)
	{
		cin >> S;
		v.push_back(S);

		if (S[0] != '!') count++;
	}

	sort(v.rbegin(), v.rend());

	rep(i, count)
	{
		string Q = "!" + v[i];
		auto result = find(v.begin(), v.end(), Q);
		
		if (result != v.end())
		{
			cout << v[i] << endl;
			return 0;
		}
	}

	cout << "satisfiable" << endl;

	return 0;
}