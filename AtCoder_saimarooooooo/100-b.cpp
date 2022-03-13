#include<iostream>

using namespace std;

int main()
{
	int D, N;
	cin >> D >> N;

	int ans = 0;

	if (N == 100)N++;
	cout << N;

	for (int i = 0; i < D; i++)
	{
		cout << "00";
	}
	cout << endl;

}