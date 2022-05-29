//ABC250-A

#include<iostream>

using namespace std;

int main()
{
    int h,w,r,c;
    cin >> h >> w >> r >> c;

    int ans = 0;
    
    if(c != 1) ans++;
    if(c != w)ans++;
    if(r != 1)ans++;
    if(r != h)ans++;

    cout << ans << endl;
    
    return 0;
}