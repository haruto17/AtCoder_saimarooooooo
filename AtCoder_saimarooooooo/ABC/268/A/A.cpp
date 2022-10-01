// abc268-a

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> v;
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;

        v.push_back(s);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size() << endl;

    return 0;
}