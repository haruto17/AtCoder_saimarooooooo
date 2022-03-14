//ABC100-c

#include<iostream>
#include<vector>

using namespace std;

int calc(int x)
{
	int sum = 0;

	while (x % 2 == 0)
	{
		x /= 2;
		sum++;
	}

	return sum;
}

int main()
{
	int N;
	cin >> N;

	vector<int>a(N);

	for (int i = 0; i < N; i++) cin >> a[i];
	
	int ans = 0;

	for (int i = 0; i < N; i++)
	{
		ans += calc(a[i]);
	}

	cout << ans << endl;
}