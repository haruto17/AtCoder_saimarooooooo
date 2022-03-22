//ABC244-c

#include<iostream>

using namespace std;

#define rep(i,n) for(int i = 1; i <= (int)(n);i++)

bool Data[2005];

int main()
{
	int N;
	cin >> N;

	while (true)
	{
		rep(i, 2*N+1)
		{
			if (Data[i] == false)
			{
				cout << i << endl;
				Data[i] = true;
				break;
			}
		}

		int res;
		cin >> res;
		if (res == 0)break;
		Data[res] = true;
	}

	return 0;
}