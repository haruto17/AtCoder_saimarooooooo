// abc276-c

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>

using namespace std;

int main()
{
    int n, p;
    cin >> n;

    vector<int> P;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        P.push_back(p);
    }

    vector<int> qwe(n);
    copy(P.begin(), P.end(), qwe.begin());

    vector<int> a(n);
    iota(a.begin(), a.end(), 1);

    if (n == 2)
    {
        sort(P.begin(), P.end());
        cout << P[0] << " " << P[1] << "\n";
        return 0;
    }

    do
    {
        if (P != a)
        {
            if (P != qwe)
            {
                for (auto x : P)
                {
                    cout << x << " ";
                }
                cout << "\n";
                return 0;
            }
        }
    } while (prev_permutation(P.begin(), P.end()));
}