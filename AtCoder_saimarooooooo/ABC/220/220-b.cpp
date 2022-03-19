//ABC220-b

#include<iostream>

using namespace std;

int convert(string S, int Base)
{
	int sum = 0;

	for (int i = 0; i < S.length(); i++)
	{
		sum = sum * Base + (S[i] - '0');
	}
	return sum;
}

int main()
{
	int K;
	string A, B;
	cin >> K >> A >> B;

	int dec_A = convert(A, K);
	int dec_B = convert(B, K);

	cout << (long long)dec_A * dec_B << endl;

	return 0;
}