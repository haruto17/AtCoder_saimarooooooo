// abc281-b

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    bool ans = true;

    if(!(s.front() >= 'A' && s.front() <= 'Z')) {
        ans = false;
    } else if(!(s.back() >= 'A' && s.back() <= 'Z')) {
        ans = false;
    }

    if(s.size() - 2 != 6) {
        ans = false;
    }

    for(int i = 1; i < s.size() - 1; ++i) {
        if(!(s[i] >= '0' && s[i] <= '9')) {
            ans = false;
        }

        if(i == 1) {
            if(s[i] == '0') {
                ans = false;
            }
        }
    }

    cout << (ans ? "Yes" : "No") << "\n";

    return 0;
}