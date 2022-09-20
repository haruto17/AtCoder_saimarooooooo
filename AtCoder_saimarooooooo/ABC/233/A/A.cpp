// ABC233-A

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int i = 0;

    while (x + i * 10 < y)
    {
        i++;
    }

    cout << i << endl;

    return 0;
}