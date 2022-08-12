// ABS-abc081_b

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        while (a[i] % 2 == 0)
        {
            a[i] /= 2;
            cnt++;
        }
        v[i] = cnt;
    }

    sort(v.begin(), v.end());

    cout << v[0] << endl;

    return 0;
}