//ABC187-a

#include<iostream>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	int sum_A = A / 100 + A % 100 / 10 + A % 100 % 10;
	int sum_B = B / 100 + B % 100 / 10 + B % 100 % 10;

	if (sum_A == sum_B)cout << sum_A << endl;
	else cout << max(sum_A, sum_B) << endl;

	return 0;
}