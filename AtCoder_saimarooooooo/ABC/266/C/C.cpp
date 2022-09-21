// ABC266-C

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <utility>
#include <string>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int isInside(double ax, double ay, double bx, double by, double cx, double cy, double tx, double ty)
{
    double abXat, bcXbt, caXct;

    abXat = (bx - ax) * (ty - ay) - (by - ay) * (tx - ax);
    bcXbt = (cx - bx) * (ty - by) - (cy - by) * (tx - bx);
    caXct = (ax - cx) * (ty - cy) - (ay - cy) * (tx - cx);

    if ((abXat > 0.0 && bcXbt > 0.0 && caXct > 0.0) || (abXat < 0.0 && bcXbt < 0.0 && caXct < 0.0))
    {
        return 1;
    }
    else if (abXat * bcXbt * caXct == 0.0)
    {
        return 0;
    }

    return 0;
}

int isConcave(vector<int> x, vector<int> y)
{
    int i;
    rep(i, 4)
    {
        if (isInside(x[i % 4], y[i % 4], x[(i + 1) % 4], y[(i + 1) % 4], x[(i + 2) % 4], y[(i + 2) % 4], x[(i + 3) % 4], y[(i + 3) % 4]))
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    vector<int> x(4), y(4);
    rep(i, 4)
    {
        cin >> x[i] >> y[i];
    }

    if (!isConcave(x, y))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}