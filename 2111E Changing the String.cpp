#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        vector<set<int>> opsFlat(9);
        auto idx = [&](int a,int b){ return a*3 + b; };
        for(int i = 0; i < q; i++){
            char xc, yc;
            cin >> xc >> yc;
            int u = xc - 'a';
            int v = yc - 'a';
            opsFlat[idx(u, v)].insert(i);
        }

        string ans = s;
        for(int i = 0; i < n; i++){
            int u = s[i] - 'a';
            ans[i] = s[i];
            for(int t0 = 0; t0 < 3; t0++){
                if(t0 > u) break;
                if(t0 == u){
                    ans[i] = char('a' + u);
                    break;
                }

                int bestLen = 4, bestLast = q + 1;
                int bu = -1, bv = -1, bw = -1;
                int bj1 = -1, bj2 = -1, bj3 = -1;

                auto &st1 = opsFlat[idx(u, t0)];
                if(!st1.empty()){
                    int j = *st1.begin();
                    if(j < bestLast){
                        bestLen = 1; bestLast = j;
                        bu = u; bv = t0; bw = -1;
                        bj1 = j;
                    }
                }

                for(int m = 0; m < 3; m++){
                    if(m == u || m == t0) continue;
                    auto &s1 = opsFlat[idx(u, m)];
                    if(s1.empty()) continue;
                    int j1 = *s1.begin();
                    auto &s2 = opsFlat[idx(m, t0)];
                    auto it2 = s2.upper_bound(j1);
                    if(it2 == s2.end()) continue;
                    int j2 = *it2;
                    if(j2 < bestLast){
                        bestLen = 2; bestLast = j2;
                        bu = u; bv = m; bw = t0;
                        bj1 = j1; bj2 = j2;
                    }
                }

                for(int m1 = 0; m1 < 3; m1++){
                    if(m1 == u) continue;
                    auto &s1 = opsFlat[idx(u, m1)];
                    if(s1.empty()) continue;
                    int j1 = *s1.begin();
                    for(int m2 = 0; m2 < 3; m2++){
                        if(m2 == m1 || m2 == t0) continue;
                        auto &s2 = opsFlat[idx(m1, m2)];
                        auto it2 = s2.upper_bound(j1);
                        if(it2 == s2.end()) continue;
                        int j2 = *it2;
                        auto &s3 = opsFlat[idx(m2, t0)];
                        auto it3 = s3.upper_bound(j2);
                        if(it3 == s3.end()) continue;
                        int j3 = *it3;
                        if(j3 < bestLast){
                            bestLen = 3; bestLast = j3;
                            bu = u; bv = m1; bw = m2;
                            bj1 = j1; bj2 = j2; bj3 = j3;
                        }
                    }
                }

                if(bestLen < 4){
                    opsFlat[idx(bu, bv)].erase(bj1);
                    (bestLen >= 2) ? (void)opsFlat[idx(bv, bw)].erase(bj2) : (void)0;
                    (bestLen == 3) ? (void)opsFlat[idx(bw, t0)].erase(bj3) : (void)0;
                    ans[i] = char('a' + t0);
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
