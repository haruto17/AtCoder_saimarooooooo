// abc265-a

#include <iostream>

using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    int a = x * n;
    int b = n / 3 * y + n % 3 * x;

    cout << min(a, b) << endl;

    return 0;
}