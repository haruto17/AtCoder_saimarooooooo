//‚İ‚ñ‚È‚ÌƒvƒƒRƒ“2018-a

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	string front_three = s.substr(0, 3);

	if (front_three == "yah" && s[3] == s[4])cout << "yes" << endl;
	else cout << "no" << endl;

	return 0;
}