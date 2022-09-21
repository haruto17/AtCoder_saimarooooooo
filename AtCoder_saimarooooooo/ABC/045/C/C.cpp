// ABC045-C

#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    string S;
    cin >> S;

    int n = S.length();
    ll ans = 0;

    for (int bit = 0; bit < (1 << n - 1); bit++)
    {
        ll sum = 0;
        ll a = S[0] - '0';
        for (int j = 0; j < n - 1; j++)
        {
            if (bit & (1 << j))
            {
                sum += a;
                a = 0;
            }

            a = a * 10 + S[j + 1] - '0';
        }
        sum += a;
        ans += sum;
    }

    cout << ans << endl;

    return 0;
}