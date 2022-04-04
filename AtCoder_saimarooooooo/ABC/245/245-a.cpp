//ABC245-a

#include<iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a == c)
	{
		if (b == d)cout << "Takahashi" << endl;
		else if (b < d) cout << "Takahashi" << endl;
		else if (d < b)cout << "Aoki" << endl;
	}
	else if (a < c)cout << "Takahashi" << endl;
	else if (c < a)cout << "Aoki" << endl;

	return 0;
}