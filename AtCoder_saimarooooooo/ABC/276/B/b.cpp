// abc276-b

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m;

    vector<vector<int>> A(1000001);
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        A[a].push_back(b);
        A[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        vector<int> c;
        for (int j = 0; j < A[i].size(); j++)
        {
            c.push_back(A[i][j]);
        }

        sort(c.begin(), c.end());
        cout << c.size() << " ";
        for (auto x : c)
        {
            cout << x << " ";
        }

        cout << "\n";
    }
    return 0;
}