#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sai(ll a, ll b, vector<pair<ll, ll>> &c) {
    ll d = 1e18;
    vector<ll> e(a), f(a);
    for (ll g = 0; g < a; ++g) {
        e[g] = c[g].first;
        f[g] = c[g].second;
    }
    vector<ll> h(a + 1, 0);
    for (ll g = 1; g <= a; ++g) {
        h[g] = (f[g - 1] - e[g - 1]) + h[g - 1];
    }
    vector<ll> i(a + 1, 0);
    for (ll g = 1; g < a; ++g) {
        i[g] = (e[g] - f[g - 1]) + i[g - 1];
    }
    i[a] = d;
    ll j = 0, k = 0;
    for (ll g = 0; g <= a; ++g) {
        while (j + 1 <= a && i[j] - i[g] < b) ++j;
        k = max(k, b + h[j] - h[g]);
    }
    return k;
}

int main() {
    ll a, b;
    cin >> a >> b;
    vector<pair<ll, ll>> c(a);
    for (ll i = 0; i < a; ++i) cin >> c[i].first >> c[i].second;
    cout << sai(a, b, c) << '\n';
    return 0;
}
