#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long int ans = LLONG_MAX;
    for (int i = 0; i < n; ) {
        int j = i;
        while (j + 1 < n && a[j + 1] == a[i]) j++;
        long long int v = a[i];
        long long int cost = v * (i + (n - 1 - j));
        ans = min(ans, cost);
        i = j + 1;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) solve();
}
