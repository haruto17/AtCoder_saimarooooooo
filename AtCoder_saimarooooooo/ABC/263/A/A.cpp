// ABC263

#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 1; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    rep(i, n)
    {
        cin >> v[i];
        v[i]--;
    }

    vector<int> dp(n + 1);
    dp[1] = 0;

    rep(i, n)
    {
        dp[i] = dp[v[i]] + 1;
    }

    cout << dp[n - 1] << endl;

    return 0;
}