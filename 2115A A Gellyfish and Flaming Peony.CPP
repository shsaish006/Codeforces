#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int G = a[0];
        for (int i = 1; i < n; i++) G = gcd(G, a[i]);
        int countG = 0;
        for (int i = 0; i < n; i++) if (a[i] == G) countG++;
        if (countG > 0) {
            cout << (n - countG) << "\n";
            continue;
        }
        vector<int> uniq;
        vector<bool> seen(5001, false);
        for (int x : a) {
            if (!seen[x]) {
                seen[x] = true;
                uniq.push_back(x);
            }
        }
        const int INF = 1e9;
        vector<int> dist(5001, INF);
        queue<int> q;
        for (int v : uniq) {
            dist[v] = 0;
            q.push(v);
        }
        while (!q.empty()) {
            int v = q.front(); q.pop();
            if (v == G) break;
            for (int x : uniq) {
                int nv = gcd(v, x);
                if (dist[nv] > dist[v] + 1) {
                    dist[nv] = dist[v] + 1;
                    q.push(nv);
                }
            }
        }
        int minSteps = dist[G];
        cout << (minSteps + n - 1) << "\n";
    }
    return 0;
}
