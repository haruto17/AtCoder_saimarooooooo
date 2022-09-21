// ABC040-B

#include <iostream>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 1; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    int ans = n;

    if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        rep(i, n)
        {
            int a = n / i;
            ans = min(ans, abs(i - a) + n % i);
        }

        cout << ans << endl;
    }

    return 0;
}