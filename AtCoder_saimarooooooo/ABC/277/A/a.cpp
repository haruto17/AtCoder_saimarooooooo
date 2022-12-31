#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;

int main()
{
    int n, x, p;
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        if (p == x)
        {
            cout << i << endl;
            return 0;
        }
    }
}