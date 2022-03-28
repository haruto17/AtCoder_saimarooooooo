//ABC242-b

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	string S;
	cin >> S;

	sort(S.begin(), S.end());

	cout << S << endl;

	return 0;
}