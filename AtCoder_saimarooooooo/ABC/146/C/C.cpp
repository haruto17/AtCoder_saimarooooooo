// ABC146-C

#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    ll a, b, x;
    cin >> a >> b >> x;

    ll ok = 0, ng = 1000000001;
    while (ok + 1 != ng)
    {
        ll md = (ok + ng) / 2;
        ll dx = to_string(md).length();
        if (a * md + b * dx <= x)
        {
            ok = md;
        }
        else
        {
            ng = md;
        }
    }

    cout << ok << endl;

    return 0;
}