//ABC109-A

#include<iostream>

using namespace std;
#define rep(i,n) for(int i = 1; i <= n;i++)

int main()
{
	int a, b;
	cin >> a >> b;

	bool flag = false;
	rep(i, 3)
	{
		if (a * b * i % 2 != 0)
		{
			flag = true;
		}
	}

	if (flag)cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}