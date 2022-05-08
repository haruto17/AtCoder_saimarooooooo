#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	
	int len = s.length();
	len--;

	if (s[len] == 'r' && s[len - 1] == 'e')
	{
		cout << "er" << endl;
	}
	else cout << "ist" << endl;
	
	return 0;
}