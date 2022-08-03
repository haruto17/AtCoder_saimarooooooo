// ABC213-B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> A;
    rep(i, n)
    {
        int a;
        cin >> a;
        A.emplace_back(a, i + 1);
    }

    sort(A.rbegin(), A.rend());

    cout << A[1].second << endl;

    return 0;
}