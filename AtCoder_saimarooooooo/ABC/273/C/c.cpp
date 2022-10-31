// abc273-c

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,a;
    cin >> n;

    map<int,int> mp;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        mp[a]++;
    }

    vector<int> ans;
    for(auto x : mp) ans.push_back(x.second);

    reverse(ans.begin(),ans.end());

    while(ans.size() < n) ans.push_back(0);

    for(auto x : ans) cout << x << "\n";

    return 0;
}