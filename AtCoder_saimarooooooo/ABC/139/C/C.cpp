// ABC139-C

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    vector<int> H(n);
    rep(i, n) cin >> H[i];

    int ans = 0;

    vector<bool> check(n);
    for (int i = 0; i < n; i++)
    {

        int sum = 0;
        int now = H[i];

        if (!check[i])
        {
            check[i] = true;
            for (int j = i + 1; j < n; j++)
            {
                if (now < H[j])
                {
                    break;
                }
                else
                {
                    check[j] = true;
                    now = H[j];
                    sum++;
                }
            }
            ans = max(ans, sum);
        }
    }

    cout << ans << endl;

    return 0;
}