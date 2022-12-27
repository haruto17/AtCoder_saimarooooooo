// abc278-a

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    int n, k, a;
    cin >> n >> k;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < k; i++)
    {
        A.erase(A.begin());
        A.push_back(0);
    }

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }

    cout << "\n";

    return 0;
}