// ABC260-B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<bool> v(n, false);

    // math
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        p.emplace_back(-a[i], i);
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < x; i++)
    {
        v[p[i].second] = true;
    }

    p.clear();

    // english
    for (int i = 0; i < n; i++)
    {
        if (!v[i])
        {
            p.emplace_back(-b[i], i);
        }
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < y; i++)
    {
        v[p[i].second] = true;
    }

    p.clear();

    // math and english
    for (int i = 0; i < n; i++)
    {
        if (!v[i])
        {
            p.emplace_back(-(a[i] + b[i]), i);
        }
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < z; i++)
    {
        v[p[i].second] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i])
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}