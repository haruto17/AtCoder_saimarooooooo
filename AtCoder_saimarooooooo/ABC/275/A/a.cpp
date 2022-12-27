// abc275-a

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,h;
    cin >> n;

    int max_size = 0,ans =0;

    for(int i = 1; i <= n; i++)
    {
        cin >> h;
        if(max_size < h)
        {
            ans = i;
            max_size = h;
        }
    }

    cout << ans << endl;

    return 0;
}