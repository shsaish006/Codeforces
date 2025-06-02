#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<ll> ans(n);
        vector<ll> prev;
        prev.reserve(n);

        ll z = 0;
        ll beauty = 0;

        for (int i = 0; i < n; i++) {
            ll v;
            cin >> v;

            if (v > z) {
                ll g2 = 0;
                if (!prev.empty()) {
                    if (2 * z > v) {
                        g2 = v;
                    } else {
                        for (ll y : prev) {
                            ll f = y + (v % y);
                            if (f > g2) g2 = f;
                        }
                    }
                }
                beauty = max(beauty, g2);
                z = v;
            }
            else if (v < z) {
                ll f = v + (z % v);
                beauty = max(beauty, f);
            }

            ans[i] = beauty;
            prev.push_back(v);
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << (i + 1 < n ? ' ' : '\n');
        }
    }
    return 0;
}