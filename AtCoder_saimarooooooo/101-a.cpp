//ABC101-a

#include<iostream>

using namespace std;

int main()
{
	int ans = 0;
	for (int i = 0; i < 4; i++)
	{
		char c;
		cin >> c;

		if (c == '+')ans++;
		else ans--;
	}

	cout << ans << endl;
}