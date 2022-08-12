// ABC263-C

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a;
    rep(i, n) a.push_back(0);
    rep(i, m - n) a.push_back(1);

    do
    {
        rep(i, m)
        {
            if (a[i] == 0)
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));

    return 0;
}