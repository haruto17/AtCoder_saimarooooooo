// abc249-a

#include <iostream>
#include <algorithm>

using namespace std;

int calcMeter(int a, int b, int c, int x)
{
    int p = x / (a + c), r = x % (a + c);
    int s = p * a + min(r, a);
    return s * b;
}

int main()
{
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int T = calcMeter(a, b, c, x);
    int A = calcMeter(d, e, f, x);

    if (T > A)
    {
        cout << "Takahashi" << endl;
    }
    else if (T < A)
    {
        cout << "Aoki" << endl;
    }
    else if (T == A)
    {
        cout << "Draw" << endl;
    }

    return 0;
}