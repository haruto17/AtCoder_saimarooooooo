//ABC102-b

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int>A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	sort(A.begin(), A.end());

	N--;
	cout << A[N] - A[0] << endl;

	return 0;
}