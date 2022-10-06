// abc236-b

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A(4 * n - 1);
    for (int i = 0; i < 4 * n - 1; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int count = 1;
    for (int i = 0; i <= A.size() - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            count++;
        }
        else if (A[i] != A[i + 1])
        {
            if (count == 4)
            {
                count = 1;
                continue;
            }
            else
            {
                cout << A[i] << endl;
                return 0;
            }
        }
    }
}