// 004 - Cross Sum

#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<int>> A(h, vector<int>(w));
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> A[i][j];
        }
    }

    vector<int> Row(h), Column(w);
    rep(i, h)
    {
        rep(j, w)
        {
            Row[i] += A[i][j];
        }
    }

    rep(i, w)
    {
        rep(j, h)
        {
            Column[i] += A[j][i];
        }
    }

    rep(i, h)
    {
        rep(j, w)
        {
            cout << Row[i] + Column[j] - A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}