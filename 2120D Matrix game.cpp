#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll a = 1e9 + 7;

ll l(ll m, ll n, const vector<ll>& j) {
    ll o = 1;
    for (ll p = 1; p <= n; p++) {
        ll q = (m - n + p) % a;
        o = o * q % a;
        o = o * j[p] % a;
    }
    return o;
}

void sai() {
    int b;
    cin >> b;

    vector<ll> c(b), d(b), e(b);
    ll f = 0;

    for (int g = 0; g < b; g++) {
        cin >> c[g] >> d[g] >> e[g];
        f = max(f, c[g]);
    }

    vector<ll> j(f + 2);
    j[1] = 1;
    for (ll k = 2; k <= f + 1; k++) {
        j[k] = (a - a / k * j[a % k] % a) % a;
    }

    for (int g = 0; g < b; g++) {
        ll h = c[g], i = d[g], m = e[g];
        ll n = (h - 1) * m + 1;
        ll o = l(n, h, j);
        ll p = ((i - 1) % a) * (m % a) % a;
        p = (p * o + 1) % a;
        cout << n % a << " " << p << '\n';
    }
}

int main() {
    sai();
    return 0;
}
