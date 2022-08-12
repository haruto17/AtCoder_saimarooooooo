// ABS-abc087_b

#include <iostream>

using namespace std;
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

int sum(int x)
{
    int q = 0;
    while (x > 0)
    {
        q += x % 10;
        x /= 10;
    }

    return q;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;

    rep(i, n)
    {
        if (sum(i) >= a && sum(i) <= b)
        {
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}