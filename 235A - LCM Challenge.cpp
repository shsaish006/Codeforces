#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ll n;
    cin >> n;
    ll res = 0;

    for (ll i = n; i >= max(1LL, n - 4); --i) {
        for (ll j = n; j >= max(1LL, n - 4); --j) {
            for (ll k = n; k >= max(1LL, n - 4); --k) {
                ll curr = lcm(i, lcm(j, k));
                res = max(res, curr);
            }
        }
    }

    cout << res << '\n';
    return 0;
}
