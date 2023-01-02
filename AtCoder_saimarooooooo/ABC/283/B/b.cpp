// abc283-b

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q, query, k, x;
    cin >> n;

    vector<int> A(n + 1);
    for(int i = 1; i <= n; ++i) {
        cin >> A[i];
    }

    cin >> q;
    vector<int> ans;

    for(int i = 1; i <= q; ++i) {
        cin >> query;
        if(query == 1) {
            cin >> k >> x;
            A[k] = x;
        } else {
            cin >> k;
            ans.push_back(A[k]);
        }
    }

    for(auto x : ans) {
        cout << x << "\n";
    }

    return 0;
}