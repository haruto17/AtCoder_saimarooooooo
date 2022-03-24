//ABC243-b

#include<iostream>
#include<vector>

using namespace std;

#define rep(i,n) for(int i = 0; i < (int)(n);i++)

int main()
{
	int N;
	cin >> N;

	vector<int>A(N);
	rep(i, N)cin >> A[i];

	vector<int>B(N);
	rep(i, N)cin >> B[i];

	int ans_1 = 0;

	rep(i, N) if (A[i] == B[i])ans_1++;

	int ans_2 = 0;

	rep(i, N)
	{
		rep(j, N)
		{
			if (A[i] == B[j] && i != j)
			{
				ans_2++;
			}
		}
	}

	cout << ans_1 << endl;
	cout << ans_2 << endl;

	return 0;
}