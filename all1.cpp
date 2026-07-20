#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, x, y, z;
    cin >> d;
    cin >> x;
    cin >> y;
    cin >> z;

    if ((7 * x) > ((d * y) + (z * (7 - d)))) {
        cout << 7 * x << endl;
    } else {
        cout << (d * y) + (z * (7 - d)) << endl;
    }

   
}