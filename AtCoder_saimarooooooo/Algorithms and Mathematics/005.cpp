//005 Modulo 100

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a, sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
	}

	cout << sum % 100 << endl;

	return 0;
}