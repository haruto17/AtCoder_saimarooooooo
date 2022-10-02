// abc216-a

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    char c;
    cin >> x >> c >> y;

    if (y >= 0 && y <= 2)
    {
        cout << x << '-' << endl;
    }
    else if (y >= 3 && y <= 6)
    {
        cout << x << endl;
    }
    else
    {
        cout << x << '+' << endl;
    }

    return 0;
}