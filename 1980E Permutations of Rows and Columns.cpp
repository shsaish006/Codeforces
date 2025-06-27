#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> b[i][j];

        map<int, pair<int, int>> pos;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                pos[b[i][j]] = make_pair(i, j);

        vector<int> row(n, -1), col(m, -1);
        bool ok = true;

        for (int i = 0; i < n && ok; i++) {
            for (int j = 0; j < m && ok; j++) {
                int val = a[i][j];
                int r = pos[val].first;
                int c = pos[val].second;

                if (row[i] == -1) row[i] = r;
                else if (row[i] != r) {
                    cout << "NO\n";
                    ok = false;
                    break;
                }

                if (col[j] == -1) col[j] = c;
                else if (col[j] != c) {
                    cout << "NO\n";
                    ok = false;
                    break;
                }
            }
        }

        if (ok) cout << "YES\n";
    }

    return 0;
}
