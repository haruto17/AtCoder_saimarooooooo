//ABC246-a

#include<iostream>

using namespace std;

#define rep(i,n) for(int i = 0; i < (int)(n);i++)

int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (x1 == x2)cout << x3;
	else if (x2 == x3)cout << x1;
	else if (x3 == x1)cout << x2;

	cout << " ";

	if (y1 == y2)cout << y3;
	else if (y2 == y3)cout << y1;
	else if (y3 == y1)cout << y2;

	return 0;
}