//ABC051-b

#include<iostream>

using namespace std;

#define rep(i,n) for(int i = 0; i <= (int)(n);i++)

int main()
{
	int K, S;
	cin >> K >> S;

	int ans = 0;

	rep(i, K)
	{
		rep(j, K)
		{
			int z = S - i - j;

			if (0 <= z && z <= K)ans++;
		}
	}

	cout << ans << endl;
	return 0;
}