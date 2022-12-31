// abc279-a

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == 'v') {
            ans += 1;
        } else if(s[i] == 'w') {
            ans += 2;
        }
    }

    cout << ans << endl;

    return 0;
}