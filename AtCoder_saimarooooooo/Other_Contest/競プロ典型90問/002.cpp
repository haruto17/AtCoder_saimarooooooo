// 002 - Encyclopedia of Parentheses

#include <iostream>

using namespace std;

bool check(string s)
{
    int dep = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            dep++;
        }
        if (s[i] == ')')
        {
            dep--;
        }
        if (dep < 0)
        {
            return false;
        }
    }
    if (dep == 0)
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    for (int bit = 0; bit < (1 << n); ++bit)
    {
        string candidate = "";

        // 右側から見ていく
        for (int j = n - 1; j >= 0; j--)
        {
            // ビットbitにj番目のフラグが立っているか　立っていたら")" 立っていなかったら"("
            if ((bit & (1 << j)) == 0)
            {
                candidate += "(";
            }
            else
            {
                candidate += ")";
            }
        }

        // 正しいカッコ列か判定
        bool I = check(candidate);
        if (I)
        {
            cout << candidate << endl;
        }
    }

    return 0;
}