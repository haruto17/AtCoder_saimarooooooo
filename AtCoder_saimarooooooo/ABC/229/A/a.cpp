// abc229-a

#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == "#." && s2 == ".#")
    {
        cout << "No" << endl;
    }
    else if (s1 == ".#" && s2 == "#.")
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}