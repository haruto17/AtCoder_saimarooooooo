// B-Long Long Ago

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<pair<int, int>> p;
    rep(i, n)
    {
        if (k > a[i])
        {
            p.emplace_back(a[i], i + 1);
        }
    }

    if (p.size() == 0)
    {
        cout << -1 << endl;
    }
    else if (p.size() > 0)
    {
        sort(p.begin(), p.end());
        cout << p[p.size() - 1].second << endl;
    }

    return 0;
}