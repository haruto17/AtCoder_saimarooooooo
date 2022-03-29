//ABC223-a

#include<iostream>

using namespace std;

int main()
{
	int X;
	cin >> X;

	if (X < 100)cout << "No" << endl;
	else if (X % 100 != 0) cout << "No" << endl;
	else cout << "Yes" << endl;

	return 0;
}