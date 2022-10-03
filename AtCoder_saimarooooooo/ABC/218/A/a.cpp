// abc218-a

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    n--;

    if (s[n] == 'o')
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}