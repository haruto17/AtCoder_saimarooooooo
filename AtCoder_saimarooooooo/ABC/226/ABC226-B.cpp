// ABC226-B

#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n;
    cin >> n;

    set<vector<int>> st;

    rep(i, 0, n)
    {
        int l;
        cin >> l;
        vector<int> v(l);
        for (auto &x : v)
            cin >> x;

        st.insert(v);
    }

    cout << st.size() << endl;

    return 0;
}