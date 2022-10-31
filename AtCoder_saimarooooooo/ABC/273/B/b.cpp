// abc273-b

#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    ll x,k;
    cin >> x >> k;

    ll pow10 = 1;

    for(ll i = 0; i < k; i++)
    {
        x /= pow10;
        ll m = (x%10);
        if(m <= 4) x -= m;
        else x += 10 - m;

        x *= pow10;
        pow10 *= 10;
    }

    cout << x << "\n";

    return 0;
}