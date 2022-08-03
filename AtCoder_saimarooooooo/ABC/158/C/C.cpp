// ABC158-C

#include <iostream>

using namespace std;
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

int main()
{
    int a, b;
    cin >> a >> b;

    // 課税額が１００円のとき、税抜き価格は１２５０円で最大となるため
    rep(i, 1250)
    {

        if ((int)(i * 0.08) == a && (int)(i * 0.1) == b)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}