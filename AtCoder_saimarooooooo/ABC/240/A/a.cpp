// abc240-a

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (b - a == 1 || b - a == 9)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}