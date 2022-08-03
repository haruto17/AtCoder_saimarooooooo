// ABC046-A

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << 1 << endl;
    }
    else if (a == b && a != c)
    {
        cout << 2 << endl;
    }
    else if (b == c && b != a)
    {
        cout << 2 << endl;
    }
    else if (c == a && c != b)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }

    return 0;
}