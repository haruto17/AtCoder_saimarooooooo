// abc145-b

#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    if (n % 2 != 0)
    {
        cout << "No" << endl;
    }
    else
    {
        string t1 = s.substr(0, n / 2);
        string t2 = s.substr(s.size() - n / 2, n / 2);

        if (t1 == t2)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
    }

    return 0;
}