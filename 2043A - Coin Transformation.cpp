#include <bits/stdc++.h>
using namespace std;

int trans(int n) {
    if (n < 0) return 0;
    if (n < 4) return 1;
    return trans(n >> 2) * 2;
}

void solve() {
    int n;
    cin >> n;
    cout << trans(n) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
