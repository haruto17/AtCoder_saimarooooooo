//ABC245-a

#include<iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << (make_pair(a, b) <= make_pair(c, d) ? "Takahashi" : "Aoki") << endl;

	return 0;
}