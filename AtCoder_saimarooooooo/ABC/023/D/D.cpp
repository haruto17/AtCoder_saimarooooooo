// ABC023-D

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;
using ll = long long;
const ll INF = 1ll << 60;

int main()
{
    ll N;
    cin >> N;

    vector<ll> H(N), S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i] >> S[i];
    }

    ll left = 0, right = INF;
    while (right - left > 1)
    {
        ll mid = (left + right) / 2;

        bool ok = true;
        vector<ll> t(N);
        for (int i = 0; i < N; i++)
        {
            if (mid < H[i])
            {
                ok = false;
            }
            else
            {
                t[i] = (mid - H[i]) / S[i];
            }
        }

        sort(t.begin(), t.end());
        for (int i = 0; i < N; i++)
        {
            if (t[i] < i)
            {
                ok = false;
            }
        }

        if (ok)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }

    cout << right << endl;

    return 0;
}