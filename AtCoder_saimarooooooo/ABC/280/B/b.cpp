// abc280-b

#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    ll s, sum = 0;
    vector<ll> ans;
    for(int i = 0; i < n; ++i) {
        cin >> s;
        if(i == 0) {
            sum += s;
            ans.push_back(s);
        } else {
            ans.push_back(s - sum);
            sum += s - sum;
        }
    }

    cout << ans[0];
    for(int i = 1; i < n; ++i) {
        cout << " " << ans[i];
    }

    return 0;
}