// ABC046-B

// 一番最初のボールはk種類の色を塗れる
// それより左のボールはk-1種類の色を塗れる
// 結果として、k * (k-1)^n-1 通りの塗り方がある

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;

    cout << ll(k * pow(k - 1, n - 1)) << endl;

    return 0;
}