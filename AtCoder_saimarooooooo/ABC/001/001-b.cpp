//ABC001-b

#include<iostream>

using namespace std;

int main()
{
	double m;
	cin >> m;

	double km = m / 1000;

	if (km < 0.1)
	{
		cout << "00" << endl;
	}
	else if (km >= 0.1 && km <= 5)
	{
		if (km * 10 >= 10)cout << km * 10 << endl;
		else cout << '0' << km * 10 << endl;
	}
	else if (km >= 6 && km <= 30)
	{
		cout << km + 50 << endl;
	}
	else if (km >= 35 && km <= 70)
	{
		cout << (km - 30) / 5 + 80 << endl;
	}
	else cout << 89 << endl;

	return 0;
}