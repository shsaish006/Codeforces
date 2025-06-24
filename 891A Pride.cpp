#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;

    long long b[a];
    int c = 0;
    int d = INT_MAX;

    for (int e = 0; e < a; e++) {
        cin >> b[e];
        if (b[e] == 1) {
            c++;
        }
    }

    if (c > 0) {
        cout << a - c << "\n";
    } else {
        for (int e = 0; e < a; e++) {
            long long f = b[e];
            for (int g = e + 1; g < a; g++) {
                f = __gcd(f, b[g]);
                if (f == 1) {
                    d = min(d, g - e);
                    break;
                }
            }
        }

        if (d == INT_MAX) {
            cout << -1 << "\n";
        } else {
            cout << d + a - 1 << "\n";
        }
    }

    return 0;
}
