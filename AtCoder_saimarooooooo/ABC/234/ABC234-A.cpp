//ABC234-A

#include<iostream>

using namespace std;

int calc_f(int x)
{
	int fx = x * x + 2 * x + 3;
	return fx;
}

int main()
{
	int t;
	cin >> t;

	cout << calc_f(calc_f(calc_f(t) + t) + calc_f(calc_f(t))) << endl;

	return 0;
}