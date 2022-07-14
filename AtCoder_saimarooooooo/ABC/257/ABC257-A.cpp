// ABC257-A

#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    string ans;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans += char(65 + i);
        }
    }

    cout << ans[x - 1] << endl;

    return 0;
}