//ABC126-a

#include<iostream>

using namespace std;

int main()
{
	int N, K;
	string S;
	cin >> N >> K >> S;

	S[K - 1] = char(S[K - 1] + 32);

	cout << S << endl;

	return 0;
}