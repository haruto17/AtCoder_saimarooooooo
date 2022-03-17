//ABC120-c

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	string S;
	cin >> S;

	int count_0 = count(S.begin(), S.end(), '0');
	int count_1 = count(S.begin(), S.end(), '1');
	int ans = min(count_0, count_1) * 2;

	cout << ans << endl;

	return 0;
}