// abc239-a

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
using ll = long long;

int main()
{
    ll h;
    cin >> h;

    cout << fixed;
    cout << setprecision(7) << sqrt(h * (12800000 + h)) << endl;

    return 0;
}