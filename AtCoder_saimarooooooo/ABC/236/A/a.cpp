// abc236-a

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a, b;
    cin >> a >> b;

    a--;
    b--;

    char c = s[a];
    s[a] = s[b];
    s[b] = c;

    cout << s << endl;

    return 0;
}