// abc253-a

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> A(3);
    for(int i = 0; i < 3; ++i) {
        cin >> A[i];
    }

    int b = A[1];
    sort(A.begin(), A.end());
    if(A[1] == b) {
        cout << "Yes" << endl;
    } else
        cout << "No" << endl;

    return 0;
}