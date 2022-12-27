// abc145-c

#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <numeric>
#include <cmath>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;

    vector<pair<int, int>> grid;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        grid.push_back({x, y});
    }

    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 0);

    long double sum = 0;
    do
    {
        for (int i = 0; i < n - 1; i++)
        {
            int a = nums[i];
            int b = nums[i + 1];

            long double dx = grid[a].first - grid[b].first;
            long double dy = grid[a].second - grid[b].second;

            sum += sqrt(dx * dx + dy * dy);
        }
    } while (next_permutation(nums.begin(), nums.end()));

    for (int i = 0; i < n; i++)
    {
        sum /= (i + 1);
    }

    cout << fixed << setprecision(10) << sum << "\n";

    return 0;
}