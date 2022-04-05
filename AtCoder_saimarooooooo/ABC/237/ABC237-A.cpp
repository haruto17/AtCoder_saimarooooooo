//ABC237-A

#include<iostream>

using namespace std;
using ll = long long;

int main()
{
	ll n;
	cin >> n;

	ll max = 2147483648, min = -2147483648;

	if (n < max && n >= min)cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}