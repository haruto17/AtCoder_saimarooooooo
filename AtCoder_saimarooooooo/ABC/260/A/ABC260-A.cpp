// ABC260-A

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < 3; i++)
    {
        int cnt = count(s.begin(), s.end(), s[i]);
        if (cnt == 1)
        {
            cout << s[i] << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}