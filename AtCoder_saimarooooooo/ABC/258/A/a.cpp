// abc258-a

#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    if(k < 60) {
        if(k < 10) {
            cout << "21:0" << k << endl;
        } else
            cout << "21:" << k << endl;
    } else if(k >= 60) {
        int a = k - 60;
        if(a < 10) {
            cout << "22:0" << a << endl;
        } else
            cout << "22:" << a << endl;
    }

    return 0;
}