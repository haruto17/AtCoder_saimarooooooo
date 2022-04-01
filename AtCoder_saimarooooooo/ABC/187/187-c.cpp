//ABC187-c
//AC

#include<iostream>
#include<vector>
#include<set>

using namespace std;

#define rep(i,n) for(int i = 0; i < (int)(n);i++)

int main()
{
	int N;
	cin >> N;

	vector<string> S(N);
	set<string> StringSet;
	rep(i, N)
	{
		cin >> S[i];
		StringSet.insert(S[i]);
	}

	rep(i, N)
	{
		if (StringSet.count("!" + S[i]))
		{
			cout << S[i] << endl;
			return 0;
		}
	}

	cout << "satisfiable" << endl;

	return 0;
}