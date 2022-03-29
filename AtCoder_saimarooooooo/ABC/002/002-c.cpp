//ABC002-c

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	double q = (c - a) * (f - b) - (d - b) * (e - a);
	double S = abs(q / 2);


	cout << fixed << setprecision(1) << S << endl;

	return 0;
}