// ABS-abc088_b

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

    sort(a.rbegin(), a.rend());

    int Alice_score = 0, Bob_score = 0;

    rep(i, n)
    {
        if (i % 2 == 0)
        {
            Alice_score += a[i];
        }
        else if (i % 2 != 0)
        {
            Bob_score += a[i];
        }
    }

    cout << Alice_score - Bob_score << endl;

    return 0;
}