// ABC266-B

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <utility>
#include <string>

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

const ll A = 998244353;

int main()
{
    ll n;
    cin >> n;

    rep(i, A)
    {
        if ((n - i) % A == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
}