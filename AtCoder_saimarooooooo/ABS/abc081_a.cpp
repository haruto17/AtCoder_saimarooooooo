// ABS-abc081_a

#include <iostream>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int ans = 0;
    rep(i, 3)
    {
        char c;
        cin >> c;

        if (c == '1')
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}