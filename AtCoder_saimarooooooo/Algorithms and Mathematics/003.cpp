//003 Sum of N Integers

#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int A, ans = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		ans += A;
	}

	cout << ans << endl;

	return 0;
}