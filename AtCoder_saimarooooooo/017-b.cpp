//ABC017-b

#include<iostream>

using namespace std;

int main()
{	
	string X;
	cin >> X;

	bool check = true;
	
	for (int i = 0; i < X.length(); i++)
	{
		if (X[i] == 'c' && X[i + 1] == 'h')i++;
		else if (X[i] == 'o')continue;
		else if (X[i] == 'k')continue;
		else if (X[i] == 'u')continue;
		else check = false;
	}

	if (check)cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}