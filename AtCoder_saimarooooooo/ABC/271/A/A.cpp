// abc271-A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    std::stringstream ss;
    ss << std::hex << n;
    std::string s = ss.str();

    if (s.size() == 1)
    {
        if (char(s[0]) >= 97 && char(s[0]) <= 122)
        {
            cout << "0" << char(s[0] - 32) << endl;
        }
        else
        {
            cout << "0" << s << endl;
        }
    }
    else
    {
        if (char(s[0]) >= 97 && char(s[0]) <= 122)
        {
            cout << char(s[0] - 32);
        }
        else
        {
            cout << s[0];
        }
        if (char(s[1]) >= 97 && char(s[1]) <= 122)
        {
            cout << char(s[1] - 32);
        }
        else
        {
            cout << s[1];
        }

        cout << endl;
    }
    return 0;
}