// abc281-b

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    bool ans = true;

    if(!(s.front() >= char(65) && s.front() <= char(90))) {
        ans = false;
    } else if(!(s.back() >= char(65) && s.back() <= char(90))) {
        ans = false;
    }

    if(s.size() - 2 != 6) {
        ans = false;
    }

    for(int i = 1; i < s.size() - 1; ++i) {
        if(!(s[i] >= char(48) && s[i] <= char(57))) {
            ans = false;
        }

        if(i == 1) {
            if(s[i] == '0') {
                ans = false;
            }
        }
    }

    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}