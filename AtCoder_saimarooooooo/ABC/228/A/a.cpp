// abc228-a

#include <iostream>

using namespace std;

int main()
{
    int s, t, x;
    cin >> s >> t >> x;

    if (s < t)
    {
        if (s <= x && x < t)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if (s > t)
    {
        if (x < t || s <= x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}