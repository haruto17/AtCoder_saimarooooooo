//ABC197-B

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int h, w, x, y;
	cin >> h >> w >> x >> y;

	vector<string> s(h);
	for (int i = 0; i < h; i++) cin >> s[i];

	int ans = -3;
	x--, y--;

	for (int i = x; i < h; i++) {
		if (s[i][y] != '#') ans++;
		else break;
	}
	for (int i = x; i >= 0; i--) {
		if (s[i][y] != '#') ans++;
		else break;
	}
	for (int j = y; j < w; j++) {
		if (s[x][j] != '#') ans++;
		else break;
	}
	for (int j = y; j >= 0; j--) {
		if (s[x][j] != '#') ans++;
		else break;
	}

	cout << ans << endl;

	return 0;
}