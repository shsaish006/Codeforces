#include <bits/stdc++.h>
using namespace std;

int b(int a) {
    int c = 0;
    while (a > 0) {
        c += a % 10;
        a /= 10;
    }
    return c;
}

int c(int a, int b) {
    while (b) {
        int d = a % b;
        a = b;
        b = d;
    }
    return a;
}

int main() {
    int a;
    cin >> a;
    while (a--) {
        int d;
        cin >> d;
        while (true) {
            int e = b(d);
            if (c(d, e) > 1) {
                cout << d << '\n';
                break;
            }
            d++;
        }
    }
    return 0;
}
