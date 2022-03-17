//ABC101-b

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string S;
	cin >> S;

	int sum = 0, N = stoi(S);

	for (int i = 0; i < S.length(); i++)
	{
		char c = S[i];
		sum += int(c - '0');
	}

	if (N % sum == 0)cout << "Yes" << endl;
	else cout << "No" << endl;
}