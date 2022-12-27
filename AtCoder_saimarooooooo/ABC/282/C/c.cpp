// abc282-c

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

int main() {
    int n;
    string s;
    cin >> n >> s;

    bool turn = false;

    string ans = {};

    for(int i = 0; i < n; i++) {
        if(turn == false && s[i] == '"') {
            turn = true;
        } else if(turn == true && s[i] == '"') {
            turn = false;
        }

        if(turn == false) {
            if(s[i] == ',') {
                ans += '.';
            } else {
                ans += s[i];
            }
        } else {
            ans += (char)s[i];
        }
    }

    cout << ans << "\n";

    return 0;
}