#include<bits/stdc++.h>
using namespace std;

#define int long long

int t, n, ans, x;

signed main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(0); 
  cout.tie(0);
  cin >> t;
  while (t--) {
    cin >> n;
    ans = -1;
    for (int i = 0; i < n; i++) {
      cin >> x;
      ans = max(ans, x + n / 2 + ((n % 2 == 0) ? 0 : ((i + 1) % 2)));
    }
    cout << ans << endl;
  }
}
