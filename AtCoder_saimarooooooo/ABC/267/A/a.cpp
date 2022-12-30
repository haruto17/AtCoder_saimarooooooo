// abc267-a

#include <array>
#include <iostream>

using namespace std;
array<string, 5> A = {"Friday", "Thursday", "Wednesday", "Tuesday", "Monday"};
int main() {
    string s;
    cin >> s;

    for(int i = 0; i < 5; ++i) {
        if(A[i] == s) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}