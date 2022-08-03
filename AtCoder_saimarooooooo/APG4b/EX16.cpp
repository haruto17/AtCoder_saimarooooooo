// APG4b-EX16

#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> v(5);
    rep(i, 5)
    {
        cin >> v[i];
    }

    rep(i, 4)
    {
        if (v[i] == v[i + 1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}