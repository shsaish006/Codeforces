#include <bits/stdc++.h>
using namespace std;

void a() {
    int b;
    cin >> b;
    while (b--) {
        int c, d;
        cin >> c >> d;
        string e;
        cin >> e;

        int f = count(e.begin(), e.end(), '1');

        if (f <= d) {
            cout << "Alice\n";
            continue;
        }

        int g = 0, h = 0;
        for (char i : e) {
            if (i == '0') {
                h++;
                g = max(g, h);
            } else {
                h = 0;
            }
        }

        if (g >= d || 2 * d <= c) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    a();
    return 0;
}
