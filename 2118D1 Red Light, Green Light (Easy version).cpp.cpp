#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;

    while (a--) {
        int b;
        int64_t c;
        cin >> b >> c;

        vector<int64_t> d(b), e(b);
        for (int i = 0; i < b; i++) {
            cin >> d[i];
            --d[i];
        }
        for (int i = 0; i < b; i++) cin >> e[i];

        map<int64_t, vector<pair<int64_t, int>>> f, g;
        for (int i = 0; i < b; i++) {
            f[(d[i] + e[i]) % c].emplace_back(d[i], i);
            g[(d[i] + c - e[i]) % c].emplace_back(d[i], i);
        }

        auto r = [&](int64_t x, int64_t y) {
            int64_t z = (x + c - y) % c;
            if (!g.count(z)) return -1;
            auto& vec = g[z];
            auto it = lower_bound(vec.begin(), vec.end(), make_pair(x, -1));
            return it == vec.end() ? -1 : it->second;
        };

        auto l = [&](int64_t x, int64_t y) {
            int64_t z = (x + y) % c;
            if (!f.count(z)) return -1;
            auto& vec = f[z];
            auto it = lower_bound(vec.begin(), vec.end(), make_pair(x + 1, -1));
            return it == vec.begin() ? -1 : prev(it)->second;
        };

        vector<vector<int>> h(2 * b + 1);
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < 2; j++) {
                int u = i * 2 + j;
                int v = (j == 0) ? l(d[i] - 1, e[i] + 1) : r(d[i] + 1, e[i] + 1);
                v = (v == -1) ? 2 * b : v * 2 + (1 - j);
                h[v].push_back(u);
            }
        }

        vector<bool> vis(2 * b + 1, false);
        vis[2 * b] = true;
        vector<int> q = {2 * b};

        for (int i = 0; i < int(q.size()); i++) {
            for (int u : h[q[i]]) {
                if (!vis[u]) {
                    vis[u] = true;
                    q.push_back(u);
                }
            }
        }

        int t;
        cin >> t;
        while (t--) {
            int64_t x;
            cin >> x;
            --x;
            int u = r(x, 0);
            u = (u == -1) ? 2 * b : u * 2;
            cout << (vis[u] ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
