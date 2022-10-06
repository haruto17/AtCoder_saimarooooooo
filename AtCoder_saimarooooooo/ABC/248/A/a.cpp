// abc248-a

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    string w = "0123456789";

    for (int i = 0; i < 10; i++)
    {
        if (s[i] != w[i])
        {
            cout << w[i] << endl;
            return 0;
        }
    }
}