// ABC146-B

#include <iostream>
#include <string>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    string s;
    cin >> n >> s;

    string ans = "";

    rep(i, s.size())
    {
        if (char(s[i] + n) >= 65 && char(s[i] + n) <= 90)
        {
            ans += char(s[i] + n);
        }
        else
        {
            int b = char(s[i] + n) - 90;
            ans += char(64 + b);
        }
    }

    cout << ans << endl;

    return 0;
}