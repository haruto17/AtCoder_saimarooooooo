// 001 - Yokan Party

#include <iostream>

using namespace std;
using ll = long long;
#define rep(i, n, m) for (int i = (n); i < (int)(m); i++)

ll n, l, k;
ll A[1 << 18];
bool solve(ll m)
{
    ll cnt = 0;
    ll pre = 0;
    rep(i, 1, n + 1)
    {
        if (A[i] - pre >= m && l - A[i] >= m)
        {
            cnt += 1;
            pre = A[i];
        }
    }
    if (cnt >= k)
    {
        return true;
    }
    return false;
}

int main()
{

    cin >> n >> l;
    cin >> k;

    rep(i, 1, n + 1) cin >> A[i];

    ll left = -1;
    ll right = l + 1;
    while (right - left > 1)
    {
        ll mid = left + (right - left) / 2;
        if (solve(mid) == false)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }

    cout << left << endl;

    return 0;
}