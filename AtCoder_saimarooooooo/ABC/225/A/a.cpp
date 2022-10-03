// abc225-a

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] != s[1] && s[1] != s[2] && s[2] != s[0])
    {
        cout << 6 << endl;
    }
    else if (s[0] == s[1] && s[1] == s[2])
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 3 << endl;
    }

    return 0;
}