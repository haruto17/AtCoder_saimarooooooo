//ABC243-a

#include<iostream>

using namespace std;

int main()
{
	int v, a, b, c;
	cin >> v >> a >> b >> c;

	while (true)
	{
		if (a > v)
		{
			cout << 'F' << endl;
			break;
		}
		else v -= a;

		if (b > v) 
		{
			cout << 'M' << endl;
			break;
		}
		else v -= b;

		if (c > v)
		{
			cout << 'T' << endl;
			break;
		}
		else v -= c;
	}

	return 0;
}