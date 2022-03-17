//ABC101-c

#include<iostream>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int ans = (N - 2) / (K - 1) + 1;
	cout << ans << endl;

	return 0;
}