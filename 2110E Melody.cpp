#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;
 
struct DSU {
    std::vector<int> f, siz, blk;
    
    DSU() {}
    DSU(int n) {
        init(n);
    }
    
    void init(int n) {
        f.resize(n);
        std::iota(f.begin(), f.end(), 0);
        siz.assign(n, 1);
        blk.assign(n, 0);
    }
    
    int find(int x) {
        while (x != f[x]) {
            x = f[x] = f[f[x]];
        }
        return x;
    }
    
    bool same(int x, int y) {
        return find(x) == find(y);
    }
    
    bool merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) {
            return false;
        }
        siz[x] += siz[y];
        blk[x] += blk[y];
        f[y] = x;
        return true;
    }
    
    int size(int x) {
        return siz[find(x)];
    }
 
    int sum(int x) {
        return blk[find(x)];
    }
};
 
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp1, mp2;
    int cnt = 0;
    auto get = [&](int x, int op) -> int
    {
        if(op == 0)
        {
            if(!mp1.count(x)) mp1[x] = cnt ++;
            return mp1[x];
        }
        else
        {
            if(!mp2.count(x)) mp2[x] = cnt ++;
            return mp2[x];
        }
    };
 
    vector<array<int, 2>> es(n);
    for(int i = 0; i < n; i ++)
    {
        int x, y;
        cin >> x >> y;
        es[i] = {get(x, 0), get(y, 1)};
    }
 
    int m = n;
    n = cnt;
    vector<set<array<int, 2>>> g(n);
    for(int i = 0; i < m; i ++)
    {
        auto [u, v] = es[i];
        g[u].insert({v, i});
        g[v].insert({u, i});
    }
 
    auto check = [&]() -> int
    {
        vector<int> dg(n);
        DSU dsu(n);
        for(auto [u, v] : es)
        {
            dsu.merge(u, v);
            dg[u] ++;
            dg[v] ++;
        }
 
        vector<int> odd;
        for(int i = 0; i < n; i ++)
            if(dg[i] % 2)
                odd.push_back(i);
 
        if(dsu.size(0) != n || odd.size() > 2) return -1;
        else return odd.size() ? odd[0] : 1;
    };
 
    int st = check();
    if(st == -1)
    {
        cout << "NO" << '\n';
        return;
    }
 
    vector<int> ans;
    auto dfs = [&](auto &&self, int x) -> void
    {
        while(g[x].size())
        {
            auto [ne, id] = *g[x].begin();
            g[x].erase({ne, id});
            g[ne].erase({x, id});
            self(self, ne);
            ans.push_back(id);
        }
    };
 
    dfs(dfs, st);
 
    cout << "YES" << '\n';
    for(int i = 0; i < m; i ++) cout << ans[i] + 1 << " \n"[i == m - 1];
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t = 1;
    cin >> t;
    while(t --)
        solve();
 
    return 0;
}
