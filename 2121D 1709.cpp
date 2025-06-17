#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<int, int>> ops;

        for (int pass = 0; pass < n; pass++) {
            for (int i = 0; i + 1 < n; i++) {
                if (a[i] > a[i + 1]) {
                    swap(a[i], a[i + 1]);
                    ops.emplace_back(1, i + 1);
                }
            }
        }

        for (int pass = 0; pass < n; pass++) {
            for (int i = 0; i + 1 < n; i++) {
                if (b[i] > b[i + 1]) {
                    swap(b[i], b[i + 1]);
                    ops.emplace_back(2, i + 1);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                swap(a[i], b[i]);
                ops.emplace_back(3, i + 1);
            }
        }

        cout << ops.size() << "\n";
        for (auto &p : ops) cout << p.first << " " << p.second << "\n";
    }
    return 0;
}
