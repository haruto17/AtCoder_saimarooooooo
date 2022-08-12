#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        if (y % 4 == 2)
        {
            cout << y << endl;
            return 0;
        }

        y++;
    }
}