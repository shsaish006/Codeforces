#include <bits/stdc++.h>
using namespace std;

void sai() {
    int a;
    cin >> a;
    while (a--) {
        int b, c, d;
        cin >> b >> c >> d;

        int e = abs(b - c);
        int f = abs(b - d);
        bool g = false;

        for (int h = 1; h <= 100; h++) {
            if (h != b) {
                if (abs(h - c) < e && abs(h - d) < f) {
                    g = true;
                    break;
                }
            }
        }

        cout << (g ? "YES" : "NO") << '\n';
    }
}

int main() {
    sai();
    return 0;
}
