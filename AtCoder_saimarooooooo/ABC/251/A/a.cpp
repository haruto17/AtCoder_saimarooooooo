// abc251-a

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if(s.size() == 1)
    {
        for(int i = 0; i < 6;i++)
        {
            cout << s ;
        }
        cout << endl;
    }
    else if(s.size() == 2)
    {
        cout << s << s << s << endl;
    }
    else if(s.size() == 3)
    {
        cout << s << s << endl;
    }
}