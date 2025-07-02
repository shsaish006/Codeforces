#include <bits/stdc++.h>
using namespace std;

void a() {
    int b;
    cin >> b;
    while (b--) {
        int c;
        cin >> c;
        vector<int> d(c);
        for (int e = 0; e < c; ++e) {
            cin >> d[e];
        }

        string f(c, '0');

        if (c > 0) {
            int g = INT_MAX;
            for (int e = 0; e < c; ++e) {
                if (d[e] <= g) {
                    f[e] = '1';
                    g = d[e];
                } else {
                    g = min(g, d[e]);
                }
            }

            g = INT_MIN;
            for (int e = c - 1; e >= 0; --e) {
                if (d[e] >= g) {
                    f[e] = '1';
                    g = d[e];
                } else {
                    g = max(g, d[e]);
                }
            }
        }

        cout << f << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    a();
    return 0;
}
