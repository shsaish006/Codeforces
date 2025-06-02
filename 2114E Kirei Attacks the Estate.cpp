#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> a;
vector<vector<int>> adj;
vector<long long> ans;
vector<long long> val_pos;// yaha positive hoga
vector<long long> val_neg; // yaha negative hoga

void dfs(int u, int p) {
   
    val_pos[u] = a[u];
    
    val_neg[u] = -a[u];

    if (p != 0) { 
        val_pos[u] = max(val_pos[u], a[u] + val_neg[p]);

        
        val_neg[u] = max(val_neg[u], -a[u] + val_pos[p]);
    }

    
    ans[u] = val_pos[u];

    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u);
        }
    }
}

void solve() {
    int n;
    cin >> n;

    a.assign(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    adj.assign(n + 1, vector<int>());
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ans.assign(n + 1, 0);
    val_pos.assign(n + 1, 0);
    val_neg.assign(n + 1, 0);

    dfs(1, 0); //yaha root vertex 1 se shuru 0 dummy 

    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
    
}