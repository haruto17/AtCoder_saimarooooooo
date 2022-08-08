// ABC146-A

#include <iostream>
#include <map>

using namespace std;

int main()
{
    string s;
    cin >> s;

    map<string, int> mp;
    mp["SUN"] = 7;
    mp["MON"] = 6;
    mp["TUE"] = 5;
    mp["WED"] = 4;
    mp["THU"] = 3;
    mp["FRI"] = 2;
    mp["SAT"] = 1;

    cout << mp[s] << endl;

    return 0;
}