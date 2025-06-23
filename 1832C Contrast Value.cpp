#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> dis;
    dis.push_back(INT_MIN);
    int i = 0;
    while(i < n) {
        dis.push_back(a[i]);
        while(i < n - 1 && a[i] == a[i + 1]) {
            i++;
        }
        i++;
    }
    dis.push_back(INT_MIN);
    int ans = 0;
    for(int i = 1; i < dis.size() - 1; i++) {
        if(dis[i] > dis[i - 1] && dis[i] > dis[i + 1]) {
            ans += 2;
            if(dis[i + 1] == INT_MIN) {
                ans--;
            }
        }
    }
    if(dis[1] < dis[2]) {
        ans++;
    }
    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
