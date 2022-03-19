//ABC220-a

#include<iostream>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int ans = -1;
	
	for (int i = A; i <= B; i++)
	{
		if (i % C == 0) ans = i;
	}

	cout << ans << endl;

	return 0;
}