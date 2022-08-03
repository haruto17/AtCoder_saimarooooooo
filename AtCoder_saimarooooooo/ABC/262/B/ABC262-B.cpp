#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(101, vector<int>(101, 0));
    for (int i = 0; i < m; i++)
    {
        int U, V;
        cin >> U >> V;

        v[i][U] = V;
        v[]
    }

    for (int i = 1; i < 101; i++)
    {
        for (int j = 1; j < 101; j++)
        {
            if (v[i][j] == 0)
            {
                break;
            }
            else
            {
                cout << v[i][j] << " ";
            }
        }
    }

    int ans = 0;

    cout << endl;
}