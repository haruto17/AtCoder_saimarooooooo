//ABC242-a

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double A, B, C, X;
	cin >> A >> B >> C >> X;

	if (X <= A) cout << 1 << endl;
	else if (X <= B)
	{
		cout << fixed << setprecision(12) << C / (B - A) << endl;
	}
	else cout << 0 << endl;

	return 0;
}