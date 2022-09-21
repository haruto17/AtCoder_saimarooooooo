// ABC045-B

#include <iostream>

using namespace std;

int main()
{
    string Sa, Sb, Sc;
    cin >> Sa >> Sb >> Sc;

    char next = Sa.front();

    while (true)
    {
        if (next == 'a')
        {
            if (Sa.empty())
            {
                cout << "A" << endl;
                return 0;
            }
            next = Sa.front();
            Sa.erase(0, 1);
        }
        else if (next == 'b')
        {
            if (Sb.empty())
            {
                cout << "B" << endl;
                return 0;
            }
            next = Sb.front();
            Sb.erase(0, 1);
        }
        else if (next == 'c')
        {
            if (Sc.empty())
            {
                cout << "C" << endl;
                return 0;
            }
            next = Sc.front();
            Sc.erase(0, 1);
        }
    }

    return 0;
}