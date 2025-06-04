#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];

    vector<pair<int, int>> v(m);
    for (int i = 0; i < m; i++) {
        int f = a[i] / 100;
        v[i] = {f, a[i]};
    }

    sort(v.begin(), v.end(), [](const pair<int, int> &x, const pair<int, int> &y) {
        if (x.first != y.first) return x.first < y.first;
        return x.second < y.second;
    });

    vector<int> fl(m), id(m);
    for (int i = 0; i < m; i++) {
        fl[i] = v[i].first;
        id[i] = v[i].second;
    }

    vector<long long int> T(n);
    for (int i = 0; i < n; i++) {
        T[i] = abs((long long int)fl[i] - (long long int)fl[m - 1 - i]);
    }

    vector<long long int> P(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        P[i] = P[i - 1] + T[i - 1];
    }

    long long int best = -1;
    int bk = 0;
    for (int k = 0; k <= n; k++) {
        long long int val = P[k] + P[n - k];
        if (val > best) {
            best = val;
            bk = k;
        }
    }

    int k = bk;
    vector<int> A(n), B(n);
    int cnt = 0;
    for (int i = 0; i < k; i++) {
        A[cnt++] = id[i];
    }
    for (int i = m - (n - k); i < m; i++) {
        A[cnt++] = id[i];
    }

    cnt = 0;
    for (int i = 0; i < n - k; i++) {
        B[cnt++] = id[i];
    }
    for (int i = m - k; i < m; i++) {
        B[cnt++] = id[i];
    }

    for (int i = 0; i < n; i++) {
        int ar = A[i];
        int br = B[n - 1 - i];
        for (int j = 0; j < 6; j++) {
            cout << (j % 2 == 0 ? ar : br);
            if (j < 5) cout << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) solve();
}
