//ABC245-b

#include<iostream>
#include<vector>

using namespace std;

#define rep(i,a,b) for(int i = a; i < b;i++)
vector<bool> v(2001);

int main()
{
	int n;
	cin >> n;

	int a;
	rep(i, 0, n)
	{
		cin >> a;
		v[a] = true;
	}

	rep(i, 0, v.size())
	{
		if (!v[i])
		{
			cout << i << endl;
			return 0;
		}
	}
}