// ABC255-B

#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> A;
    vector<pair<ll, ll>> point(n);
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        a--;
        A.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        point[i] = make_pair(x, y);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll distance = 8e18;
        for (int j = 0; j < k; j++)
        {
            ll x_distance = pow(point[i].first - point[A[j]].first, 2);
            ll y_distance = pow(point[i].second - point[A[j]].second, 2);
            distance = min(distance, x_distance + y_distance);
        }
        ans = max(ans, distance);
    }

    cout << sqrt((double)ans) << endl;

    return 0;
}