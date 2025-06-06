#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<int, int> sai(ll n) {
    int mi = 9, ma = 0;
    while (n > 0) {
        int d = n % 10;
        mi = min(mi, d);
        ma = max(ma, d);
        n /= 10;
    }
    return {mi, ma};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, k;
        cin >> a >> k;
        k--;
        while (k--) {
            pair<int, int> p = sai(a);
            int mi = p.first, ma = p.second;
            if (mi == 0) break;
            a += mi * ma;
        }
        cout << a << endl;
    }
    return 0;
}
