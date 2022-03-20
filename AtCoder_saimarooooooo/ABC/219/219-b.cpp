//ABC219-b

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<string> S(3);
	for (int i = 0; i < 3; i++)cin >> S[i];

	string T;
	cin >> T;

	for (int i = 0; i < T.length(); i++)
	{
		int index = T[i] - '1';
		cout << S[index];
	}

	cout << endl;

	return 0;
}