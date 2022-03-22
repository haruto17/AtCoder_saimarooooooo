//ABC244-b

#include<iostream>

using namespace std;

#define rep(i,n) for(int i = 0; i < (int)(n);i++)

int main()
{
	int N;
	cin >> N;
	string T;
	cin >> T;

	int direction = 0;
	int ans_x = 0;
	int ans_y = 0;

	rep(i, T.length())
	{
		if (T[i] == 'S')
		{
			if (direction == 0)ans_x++;
			else if (direction == 1)ans_y--;
			else if (direction == 2) ans_x--;
			else if (direction == 3)ans_y++;
		}
		else if (T[i] == 'R')direction = (direction + 1) % 4;
	}

	cout << ans_x << " " << ans_y << endl;

	return 0;
}