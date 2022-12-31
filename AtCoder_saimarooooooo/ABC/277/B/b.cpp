#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;

vector<char> v1 = {'H', 'D', 'C', 'S'};
vector<char> v2 = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

int main()
{
    int n;
    cin >> n;
    string s;

    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s]++;
    }

    bool check = true;

    for (auto x : mp)
    {
        if (x.second != 1)
        {
            check = false;
        }
        else if (find(v1.begin(), v1.end(), x.first[0]) == v1.end())
        {
            check = false;
        }
        else if (find(v2.begin(), v2.end(), x.first[1]) == v2.end())
        {
            check = false;
        }
    }

    if (check)
    {
        cout << "Yes" << endl;
    }
    else if (!check)
    {
        cout << "No" << endl;
    }

    return 0;
}