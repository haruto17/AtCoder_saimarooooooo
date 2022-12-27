// abc275-b

#include <iostream>

using namespace std;
using ull = unsigned long long;
ull mod = 998244353;

int main() {
    ull a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    cout << (ull)(((a%mod)*(b%mod)*(c%mod)) - ((d%mod)*(e%mod)*(f%mod))) % mod << "\n";

    return 0;
}