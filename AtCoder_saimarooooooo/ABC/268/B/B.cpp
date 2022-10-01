// abc268-B

#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    string compere = "";

    for (int i = 0; i < t.size(); i++)
    {
        compere.push_back(t[i]);

        if (s == compere)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}