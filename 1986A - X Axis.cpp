#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
const ll mod = (int)1e9 + 7;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define F first
#define S second
 
void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << max({a, b, c}) - min({a, b, c}) << '\n';
}
 
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) solve();
}