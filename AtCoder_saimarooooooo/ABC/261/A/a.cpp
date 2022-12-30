// abc261-a

// #include <iostream>

// using namespace std;

// int main() {
//     int L1, R1, L2, R2;
//     cin >> L1 >> R1 >> L2 >> R2;

//     if(R2 <= L1 || R1 <= L2) {
//         cout << 0 << endl;
//     } else if(L2 >= L1 && R2 <= R1) {
//         cout << R2 - L2 << endl;
//     } else if(L1 >= L2 && R1 <= R2) {
//         cout << R1 - L1 << endl;
//     } else if((L2 >= L1 && L2 < R1) && R2 >= R1) {
//         cout << R1 - L2 << endl;
//     } else if((L1 >= L2 && L1 < R2) && R1 >= R2) {
//         cout << R2 - L1 << endl;
//     } else if((R2 <= R1 && R2 > L1) && L2 <= L1) {
//         cout << R2 - L1 << endl;
//     } else if((R1 <= R2 && R1 > L2) && L1 <= L2) {
//         cout << R1 - L2 << endl;
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    int L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;

    if(L1 > L2) {
        swap(L1, L2);
        swap(R1, R2);
    }

    if(R1 <= L2)
        cout << 0 << endl;
    else if(R1 <= R2)
        cout << R1 - L2 << endl;
    else
        cout << R2 - L2 << endl;

    return 0;
}