#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string L, R;
        cin >> L >> R;
        int n = L.size();
        const int INF = 1e9;
        static int dp[20][2][2];
        for (int i = 0; i <= n; i++) {
            for (int lo = 0; lo < 2; lo++) {
                for (int hi = 0; hi < 2; hi++) {
                    dp[i][lo][hi] = INF;
                }
            }
        }

        dp[0][1][1] = 0;
        for (int i = 0; i < n; i++) {
            int dL = L[i] - '0';
            int dR = R[i] - '0';
            for (int lo = 0; lo < 2; lo++) {
                for (int hi = 0; hi < 2; hi++) {
                    if (dp[i][lo][hi] == INF) continue;
                    int low = lo ? 0 : dL;
                    int high = hi ? 9 : dR;
                    for (int d = low; d <= high; d++) {
                        int new_lo = lo || (d == dL);
                        int new_hi = hi || (d == dR);
                        int cost = 0;
                        if (d == dL) cost++;
                        if (d == dR) cost++;
                        dp[i + 1][new_lo][new_hi] = min(dp[i + 1][new_lo][new_hi], dp[i][lo][hi] + cost);
                    }
                }
            }
        }

        int ans = INF;
        for (int lo = 0; lo < 2; lo++) {
            for (int hi = 0; hi < 2; hi++) {
                ans = min(ans, dp[n][lo][hi]);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
