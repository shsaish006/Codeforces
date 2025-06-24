#include <bits/stdc++.h>
using namespace std;

bool sai(int x1, int x2, int y1, int y2) {
    return max(x1, y1) <= min(x2, y2);
}

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;

        vector<int> c(b);
        for (int i = 0; i < b; i++) {
            cin >> c[i];
        }

        bool d = false;
        for (int e = 0; e < b - 1; e++) {
            if (abs(c[e] - c[e + 1]) <= 1) {
                d = true;
                break;
            }
        }

        if (d) {
            cout << 0 << '\n';
            continue;
        }

        if (b == 2) {
            cout << -1 << '\n';
            continue;
        }

        bool f = false;
        for (int g = 0; g < b - 1; g++) {
            int h = min(c[g], c[g + 1]);
            int i = max(c[g], c[g + 1]);

            if (g > 0) {
                int j = c[g - 1] - 1;
                int k = c[g - 1] + 1;
                if (sai(h, i, j, k)) {
                    f = true;
                    break;
                }
            }

            if (g < b - 2) {
                int j = c[g + 2] - 1;
                int k = c[g + 2] + 1;
                if (sai(h, i, j, k)) {
                    f = true;
                    break;
                }
            }
        }

        cout << (f ? 1 : -1) << '\n';
    }

    return 0;
}
