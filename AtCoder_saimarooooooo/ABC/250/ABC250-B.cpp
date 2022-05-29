// ABC250-B

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<string> x(a * n, string(b * n, '-'));

    for (int i = 0; i < a * n; i++)
    {
        for (int j = 0; j < b * n; j++)
        {
            if (((i / a) + (j / b)) % 2 == 0)
                x[i][j] = '.';
            else
                x[i][j] = '#';
        }
    }

    for (int i = 0; i < a * n; i++)
    {
        cout << x[i] << endl;
    }

    return 0;
}