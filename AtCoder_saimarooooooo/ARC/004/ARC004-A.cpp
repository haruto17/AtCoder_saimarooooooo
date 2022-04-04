//ARC004-A

#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>

using namespace std;

#define rep(i,a,b) for(int i = a;i < b;i++)

int main()
{
	int n;
	cin >> n;

	vector<double>x(n), y(n);
	rep(i, 0, n) cin >> x[i] >> y[i];

	double ans = 0;

	rep(i, 0, n)
	{
		rep(j, i + 1, n)
		{
			double dx = x[i] - x[j];
			double dy = y[i] - y[j];

			double d = dx * dx + dy * dy;
			ans = max(ans, sqrt(d));
		}
	}

	cout << fixed << setprecision(6) << ans << endl;

	return 0;
}