//ABC088-b

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define rep(i,n) for(int i =0; i < (int)(n);i++)

int main()
{
	int N;
	cin >> N;

	vector<int> A(N);
	rep(i, N) cin >> A[i];

	sort(A.rbegin(), A.rend());

	int Alice = 0, Bob = 0;

	rep(i, N)
	{
		if (i % 2 == 0)Alice += A[i];
		else Bob += A[i];
	}

	cout << Alice - Bob << endl;

	return 0;
}