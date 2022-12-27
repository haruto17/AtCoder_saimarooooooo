// abc282-b

#include <algorithm>
#include <array>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;
using ll = long long;

int check_same(string a, string b) {
    int sum = 0;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] == 'o' || b[i] == 'o') {
            sum++;
        }
    }

    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> S(n);
    for(int i = 0; i < n; i++) {
        cin >> S[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(check_same(S[i], S[j]) == m) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}