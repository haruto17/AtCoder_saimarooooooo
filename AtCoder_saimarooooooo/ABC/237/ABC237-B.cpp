//ABC237-B

#include<iostream>
#include<vector>

using namespace std;
#define rep(i,a,b) for(int i = a; i < b;i++)

int main()
{
	int h, w;
	cin >> h >> w;

	vector<vector<int>> a(h, vector<int>(w));
	vector<vector<int>> b(w, vector<int>(h));
	rep(i, 0, h)
	{
		rep(j, 0, w)
		{
			cin >> a[i][j];
			b[j][i] = a[i][j];
		}
	}

	rep(j, 0, w)
	{
		rep(i, 0, h-1)
		{
			cout << b[j][i] << " ";
		}
		cout << b[j][h - 1] << endl;
	}

	return 0;
}