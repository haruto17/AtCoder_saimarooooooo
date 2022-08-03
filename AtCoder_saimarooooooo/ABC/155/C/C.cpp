// ABC155-C

#include <iostream>
#include <map>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    map<string, int> mp;
    rep(i, n)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    int cnt = 0;
    for (auto x : mp)
    {
        cnt = max(cnt, x.second);
    }

    for (auto x : mp)
    {
        if (x.second == cnt)
        {
            cout << x.first << endl;
        }
    }

    return 0;
}