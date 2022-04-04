//ABC085-B

#include<iostream>
#include<set>

using namespace std;

#define rep(i,n) for(int i = 0; i < n;i++)

int main()
{
	int n, d;
	cin >> n;

	set<int>st;
	rep(i, n)
	{
		cin >> d;
		st.emplace(d);
	}

	cout << st.size() << endl;

	return 0;
}