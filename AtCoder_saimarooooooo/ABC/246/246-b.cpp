//ABC246-b

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	double A, B;
	cin >> A >> B;

	double d = A * A + B * B;
	double dd = sqrt(d);

	cout << fixed << setprecision(12) << A / dd << " " << B / dd << endl;

	return 0;
}