// abc271-B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main()
{
    ll N, Q;
    cin >> N >> Q;

    vector<vector<ll>> a(N);
    for (int i = 0; i < N; i++)
    {
        int L;
        cin >> L;

        for (int j = 0; j < L; j++)
        {
            int m;
            cin >> m;

            a[i].push_back(m);
        }
    }

    for (int i = 0; i < Q; i++)
    {
        int s, t;
        cin >> s >> t;

        s--;
        t--;

        cout << a[s][t] << endl;
    }

    return 0;
}