// abc267-b

#include <array>
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    if(s[0] == '0') {
        array<bool, 7> column = {};
        column[0] = (s[6] == '1');
        column[1] = (s[3] == '1');
        column[2] = (s[1] == '1') or (s[7] == '1');
        column[3] = (s[0] == '1') or (s[4] == '1');
        column[4] = (s[2] == '1') or (s[8] == '1');
        column[5] = (s[5] == '1');
        column[6] = (s[9] == '1');
        for(int i = 0; i < 7; ++i) {
            for(int j = 0; j < i; ++j) {
                if(column[i] && column[j]) {
                    for(int k = j + 1; k < i; ++k) {
                        // j < k < i
                        // column[k]が0、ピンが倒れていたらYesを出力
                        if(!column[k]) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
        cout << "No" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}