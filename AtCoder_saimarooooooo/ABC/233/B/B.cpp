// ABC233-B

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int L, R;
    cin >> L >> R;

    L--;

    string s;
    cin >> s;

    string sub = s.substr(L, R - L);
    reverse(sub.begin(), sub.end());

    string ans = "";
    rep(i, s.size())
    {
        if (i == L)
        {
            ans += sub;
        }
        else
        {
            ans += s[i];
        }
    }

    ans.erase(R, R - L - 1);
    cout << ans << endl;

    return 0;
}