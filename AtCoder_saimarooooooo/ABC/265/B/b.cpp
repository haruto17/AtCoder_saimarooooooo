// abc265-b

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    ll n, m, t;
    cin >> n >> m >> t;

    vector<ll> A(n);
    for(ll i = 1; i < n; i++) {
        cin >> A[i];
    }

    ll x, y;
    queue<pair<ll, ll>> XY;
    for(ll i = 1; i <= m; i++) {
        cin >> x >> y;
        XY.push(make_pair(x, y));
    }

    for(ll i = 1; i < n; i++) {
        t -= A[i];

        if(t <= 0) {
            cout << "No" << endl;
            return 0;
        }

        if(i + 1 == XY.front().first) {
            t += XY.front().second;
            XY.pop();
        }
    }

    cout << "Yes" << endl;

    return 0;
}