// abc222-a

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    switch (s.size())
    {
    case 1:
        cout << "000" << s << endl;
        break;
    case 2:
        cout << "00" << s << endl;
        break;
    case 3:
        cout << "0" << s << endl;
        break;
    default:
        cout << s << endl;
        break;
    }

    return 0;
}