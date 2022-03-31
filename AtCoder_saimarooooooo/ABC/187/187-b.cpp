//ABC187-b

#include<iostream>
#include<vector>

using namespace std;

#define rep(i,n) for(int i = 0; i < (int)(n);i++)

int main()
{
	int N;
	cin >> N;

	vector<double>x(N), y(N);
	rep(i, N) cin >> x[i] >> y[i];

	int ans = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			double a = (y[j] - y[i]) / (x[j] - x[i]);
			if (a >= -1 && a <= 1)ans++;
		}
	}

	cout << ans << endl;

	return 0;
}