// ABC049-C

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    while (true)
    {
        auto pos = s.find("eraser");
        if (pos != string::npos)
        {
            s.erase(pos, 6);
        }
        else if (pos == string::npos)
        {
            break;
        }
    }

    while (true)
    {
        auto pos = s.find("erase");
        if (pos != string::npos)
        {
            s.erase(pos, 5);
        }
        else if (pos == string::npos)
        {
            break;
        }
    }

    while (true)
    {
        auto pos = s.find("dreamer");
        if (pos != string::npos)
        {
            s.erase(pos, 7);
        }
        else if (pos == string::npos)
        {
            break;
        }
    }

    while (true)
    {
        auto pos = s.find("dream");
        if (pos != string::npos)
        {
            s.erase(pos, 5);
        }
        else if (pos == string::npos)
        {
            break;
        }
    }

    if (s.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}