// abc273-a

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 1;

    while(n >= 0)
    {
        if(n==0) ans *= 1;
        else ans *= n;
        n--;
    }

    cout << ans << endl;

    return 0;
}