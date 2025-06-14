#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 0, b = 101, c = 101;
    int d; cin >> d;

    while (d--) {
        cin >> a;
        if (a < b) {
            c = b;
            b = a;
        } else if (a > b && a < c) {
            c = a;
        }
    }

    if (c == b || c == 101) {
        cout << "NO\n";
    } else {
        cout << c << "\n";
    }

    return 0;
}
