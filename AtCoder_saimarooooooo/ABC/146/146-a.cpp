//ABC146-a

#include<iostream>
#include<array>

using namespace std;

#define rep(i,n) for(int i = 0; i < (int)(n);i++)
array<string, 7> d = { "SAT","FRI","THU","WED","TUE","MON","SUN" };

int main()
{
	string S;
	cin >> S;

	rep(i, 7)
	{
		if (d[i] == S)
		{
			cout << i + 1 << endl;
			return 0;
		}
	}
}