// ABS-abc085_b

#include <iostream>
#include <set>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    set<int> st;
    rep(i, n)
    {
        int d;
        cin >> d;
        st.insert(d);
    }

    cout << st.size() << endl;

    return 0;
}