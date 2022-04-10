//ABC147-A

#include<iostream>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A + B + C >= 22) cout << "bust" << endl;
	else cout << "win" << endl;

	return 0;
}