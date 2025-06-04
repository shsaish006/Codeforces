#include <bits/stdc++.h>
using namespace std;

const int MAX_FIB = 10, MAX_DIM = 150;
vector<vector<vector<vector<int>>>> lst_tbl;
int fibs[MAX_FIB];

bool check_pack(const vector<int>& lst, int W, int H) {
    int usedH = 0, rowW = 0, rowH = 0;
    for (int s : lst) {
        if (s > W || s > H) return false;
        if (rowW + s <= W) {
            rowW += s;
            rowH = max(rowH, s);
        } else {
            usedH += rowH;
            if (usedH + s > H) return false;
            rowW = s;
            rowH = s;
        }
    }
    return usedH + rowH <= H;
}

void precompute() {
    lst_tbl.assign(MAX_FIB + 1, vector<vector<vector<int>>>(MAX_DIM + 1));
    for (int f = 2; f <= MAX_FIB; ++f) {
        fibs[0] = 1;
        fibs[1] = 2;
        for (int i = 2; i < f; i++) fibs[i] = fibs[i - 1] + fibs[i - 2];
        
        int full_mask = (1 << f) - 1;
        vector<int> sum_mask(1 << f, 0);
        for (int mask = 1; mask <= full_mask; ++mask) {
            int lsb = mask & -mask;
            int idx = __builtin_ctz(lsb);
            sum_mask[mask] = sum_mask[mask ^ lsb] + fibs[idx];
        }
        
        vector<int> dp(1 << f);
        for (int H = 1; H <= MAX_DIM; ++H) {
            if (H < fibs[f - 1]) continue;
            dp[0] = 0;
            for (int mask = 1; mask <= full_mask; ++mask) {
                if (sum_mask[mask] <= H) dp[mask] = 1;
                else {
                    int best = f + 1;
                    int s = (mask - 1) & mask;
                    while (s) {
                        if (sum_mask[s] <= H) {
                            int other = mask ^ s;
                            best = min(best, dp[other] + 1);
                        }
                        s = (s - 1) & mask;
                    }
                    dp[mask] = best;
                }
            }
            
            int S = dp[full_mask];
            if (S > f) continue;
            
            vector<vector<int>> valid(1 << f);
            for (int mask = 1; mask <= full_mask; ++mask) {
                int lsb = mask & -mask;
                int i = __builtin_ctz(lsb);
                int rem = mask ^ (1 << i);
                int s = rem;
                while (true) {
                    int s_full = s | (1 << i);
                    if (sum_mask[s_full] <= H) valid[mask].push_back(s_full);
                    if (!s) break;
                    s = (s - 1) & rem;
                }
            }
            
            set<vector<int>> bottom_sets;
            vector<int> bottoms;
            function<void(int, int)> dfs = [&](int rem_mask, int bins_left) {
                if (bins_left == 1) {
                    if (sum_mask[rem_mask] <= H) {
                        int idx = 31 - __builtin_clz(rem_mask);
                        bottoms.push_back(fibs[idx]);
                        vector<int> bl = bottoms;
                        sort(bl.begin(), bl.end(), greater<int>());
                        bottom_sets.insert(bl);
                        bottoms.pop_back();
                    }
                    return;
                }
                for (int s : valid[rem_mask]) {
                    int idx = 31 - __builtin_clz(s); bottoms.push_back(fibs[idx]);
                    dfs(rem_mask ^ s, bins_left - 1);
                    bottoms.pop_back();
                }
            };
            dfs(full_mask, S);
            auto &out_list = lst_tbl[f][H];
            out_list.reserve(bottom_sets.size());
            for (auto &bl : bottom_sets) out_list.push_back(bl);
        }
    }
}

void process() {
    int n, m;
    cin >> n >> m;
    vector<array<int, 3>> box(m);
    for (int i = 0; i < m; i++) {
        cin >> box[i][0] >> box[i][1] >> box[i][2];
    }
    vector<int> fib_seq(n);
    fib_seq[0] = 1;
    if (n >= 2) fib_seq[1] = 2;
    for (int i = 2; i < n; i++) fib_seq[i] = fib_seq[i - 1] + fib_seq[i - 2];
    int max_fib = fib_seq[n - 1];

    string result = "";
    for (int i = 0; i < m; i++) {
        int d[3] = {box[i][0], box[i][1], box[i][2]};
        bool ok = false;
        for (int hidx = 0; hidx < 3 && !ok; hidx++) {
            int H = d[hidx];
            if (H < max_fib) continue;
            int b1 = d[(hidx + 1) % 3], b2 = d[(hidx + 2) % 3];
            auto &bttm = lst_tbl[n][H];
            if (bttm.empty()) continue;
            for (auto &bl : bttm) {
                if (check_pack(bl, b1, b2) || check_pack(bl, b2, b1)) {
                    ok = true;
                    break;
                }
            }
        }
        result.push_back(ok ? '1' : '0');
    }
    cout << result << "\n";
}

int main() {
    precompute();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) process();
    return 0;
}
