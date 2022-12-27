#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iomanip>
#include <set>
#include <queue>
#include <cmath>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    map<int, vector<int>> to;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    set<int> reach;
    queue<int> q;
    q.push(1);
    reach.insert(1);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : to[v])
        {
            if (reach.count(u))
            {
                continue;
            }
            reach.insert(u);
            q.push(u);
        }
    }

    cout << (*reach.rbegin()) << endl;

    return 0;
}