#include<bits/stdc++.h>
using namespace std;
 
int fhb(long long x) {
    if (x == 0) return -1;
    int pos = 0;
    while (x >>= 1) {
        pos++;
    }
    return pos;
}
 
void solve() {
    long long x;
    cin >> x;
    int k = fhb(x);
    long long ans = (k << 1) + 3;
    cout << ans << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        solve();
    }
    return 0;
}