// ABC257-B

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> data(n, 0);

    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        a--;
        data[a] = 1;
    }

    for (int i = 0; i < q; i++)
    {
        int L;
        cin >> L;
        int count = 0;
        for (int j = 0; j < data.size(); j++)
        {
            if (data[j])
            {
                count++;
            }

            if (L == count)
            {
                if (j != n - 1 && !data[j + 1])
                {
                    swap(data[j], data[j + 1]);
                }
            }
        }
    }

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