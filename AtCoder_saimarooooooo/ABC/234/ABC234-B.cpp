//ABC234-B

#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>

using namespace std;

#define rep(i,a,b) for(int i = a;i < b;i++)

double calc(int a,vector<int>&x, vector<int>&y)
{
	double ans = 0;

	rep(i, 0, a)
	{
		rep(j, i, a)
		{
			double d_x = x[j] - x[i];
			double d_y = y[j] - y[i];
			double sum = d_x * d_x + d_y * d_y;
			ans = max(ans, sqrt(sum));
		}
	}

	return ans;
}

int main()
{
	int n;
	cin >> n;

	vector<int> x(n), y(n);
	rep(i, 0, n) cin >> x[i] >> y[i];

	cout << fixed << setprecision(10) << calc(n, x, y) << endl;

	return 0;
}