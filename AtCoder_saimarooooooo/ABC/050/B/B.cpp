// ABC050-B

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int sumT(int index, int time, vector<int> t)
{
    t[index] = time;
    ll a = accumulate(t.begin(), t.end(), 0);
    return a;
}

int main()
{
    int n;
    cin >> n;

    vector<int> T(n);
    rep(i, n)
    {
        cin >> T[i];
    }

    int m;
    cin >> m;

    rep(i, m)
    {
        int p, x;
        cin >> p >> x;

        p--;

        cout << sumT(p, x, T) << endl;
    }

    return 0;
}