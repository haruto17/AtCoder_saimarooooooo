//ABC182-B

#include<iostream>
#include<vector>

using namespace std;
#define rep(i,a,b) for(int i = a;i < (b);i++)

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	rep(i, 0, n) cin >> a[i];

	int ans = 0, sum = 0;

	rep(i, 2, 1001)
	{
		int count = 0;

		rep(j, 0, n)
		{
			if (a[j] % i == 0) count++;
		}

		if (count > sum)
		{
			ans = i;
			sum = count;
		}
	}

	cout << ans << endl;

	return 0;
}