#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        u--;
        v--;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (adj[i][j] && adj[j][k] && adj[k][i])
                {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}