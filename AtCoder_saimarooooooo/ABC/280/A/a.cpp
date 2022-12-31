// abc280-a

#include <iostream>

using namespace std;

int main() {
    int h, w, ans = 0;
    cin >> h >> w;

    string s;
    for(int i = 0; i < h; ++i) {
        cin >> s;
        for(int j = 0; j < s.size(); ++j) {
            if(s[j] == '#') {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}