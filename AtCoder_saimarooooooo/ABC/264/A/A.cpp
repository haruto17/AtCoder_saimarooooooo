// ABC264-A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int L, R;
    cin >> L >> R;

    string a = "atcoder";

    cout << a.substr(L - 1, R - L + 1) << endl;

    return 0;
}