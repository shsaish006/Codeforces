#include <bits/stdc++.h>
using namespace std;

void sai() {
    int a;
    cin >> a;
    while (a--) {
        int b, c;
        cin >> b >> c;

        if (c == 0) {
            cout << string(b, '0') << '\n';
            continue;
        }

        if (b == c) {
            cout << string(b, '1') << '\n';
            continue;
        }

        string d = "1";
        d += string(b - c - 1, '0');
        d += string(c - 1, '1');
        d += "0";

        cout << d << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sai();
    return 0;
}
