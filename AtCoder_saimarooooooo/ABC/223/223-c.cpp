//ABC223-c

#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

#define rep(i,n) for(int i = 0;i < (int)(n);i++)

int main()
{
	int N;
	cin >> N;

	vector <double> A(N), B(N);
	rep(i, N) cin >> A[i] >> B[i];

	double ans = 0, t = 0;
	
	//calc time
	rep(i, N) t += A[i] / B[i];
	t /= 2;

	rep(i, N)
	{
		ans += min(A[i], t * B[i]);
		t -= min(A[i] / B[i], t);
	}

	cout << fixed << setprecision(15) << ans << endl;

	return 0;
}