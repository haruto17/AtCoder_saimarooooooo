// abc130-b

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> L(n);
    for (int i = 0; i < n; i++)
    {
        cin >> L[i];
    }

    int ans = 1;
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        check += L[i];
        if (check > x)
        {
            break;
        }
        ans++;
    }

    cout << ans << endl;

    return 0;
}