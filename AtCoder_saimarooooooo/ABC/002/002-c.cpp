//ABC002-c

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double x1, x2, x3;
	double y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double a = x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1;
	double S = abs(a / 2);

	cout << fixed << setprecision(1) << S << endl;

	return 0;
}