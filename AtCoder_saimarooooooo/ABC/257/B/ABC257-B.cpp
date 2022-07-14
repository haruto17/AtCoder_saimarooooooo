// ABC257-B

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;

    // n個のマス目　0ですべての要素を初期化
    vector<int> data(n, 0);

    // Aの入力　コマがあるマスを0→1にする
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        a--;
        data[a] = 1;
    }

    // Lの入力
    for (int i = 0; i < q; i++)
    {
        int L;
        cin >> L;

        //左からi番目のコマを探す
        int count = 0;
        for (int j = 0; j < data.size(); j++)
        {

            //マスにコマが置いてあったら、countに加算する
            // countとLiが一致したら、コマが動かせるか判定する

            if (data[j])
            {
                count++;
            }

            if (L == count)
            {
                //判定
                if (j != n - 1 && !data[j + 1])
                {
                    swap(data[j], data[j + 1]);
                }
            }
        }
    }

    //出力
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i])
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}