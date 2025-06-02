#include <iostream>
#include <vector>
#include <limits>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        ll mn = numeric_limits<ll>::max();
        int idx = 0;

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (v[i] < mn) {
                mn = v[i];
                idx = i;
            }
        }

        ll g = 0;
        for (int i = 0; i < n; ++i) {
            if (i == idx || v[i] % mn) continue;
            g = gcd(g, v[i] / mn);
        }

        cout << (g == 1 ? "Yes" : "No") << '\n';
    }

    return 0;
}
