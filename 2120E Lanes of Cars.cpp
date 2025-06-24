#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<ll, ll> shivam(const vector<ll>& a, int b, int c, ll d) {
    ll total_count = 0, total_sum = 0;

    for (int i = 0; i < b; i++) {
        ll g = 0, h = 0;
        ll limit = d + c;

        if (limit > 0) {
            g = min(a[i], limit);
        }

        if (d > a[i]) {
            h = d - a[i];
        }

        if (g > 0) {
            ll j = g * (1 - c);
            ll k = (g - 1) * g / 2;
            total_sum += j + k;
        }

        if (h > 0) {
            ll l = a[i] + 1;
            ll m = a[i] + h;
            ll n = m * (m + 1) / 2 - (l - 1) * l / 2;
            total_sum += n;
        }

        total_count += g + h;
    }

    return {total_count, total_sum};
}

void sai() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> input;
    ll x;
    while (cin >> x) {
        input.push_back(x);
    }

    size_t idx = 0;
    int t = input[idx++];
    while (t--) {
        int d = input[idx++];
        int e = input[idx++];

        vector<ll> f(d);
        for (int i = 0; i < d; i++) {
            f[i] = input[idx++];
        }

        ll g = accumulate(f.begin(), f.end(), 0LL);
        ll h = 0;
        for (int i = 0; i < d; i++) {
            h += f[i] * e;
        }

        ll left = -e, right = g + e + 2;
        while (left < right) {
            ll mid = (left + right) / 2;
            auto [l_val, dummy] = shivam(f, d, e, mid);
            if (l_val >= g) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        ll m = left;
        auto [n, o] = shivam(f, d, e, m - 1);
        ll p = g - n;
        ll q = o + p * m;
        ll r = h + q;

        cout << r << '\n';
    }
}

int main() {
    sai();
    return 0;
}
