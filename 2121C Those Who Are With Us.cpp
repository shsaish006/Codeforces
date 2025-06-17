#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> grid(n, vector<int>(m));
        int maxVal = 0;
        vector<pair<int, int>> positions;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                if (grid[i][j] > maxVal) {
                    maxVal = grid[i][j];
                    positions.clear();
                    positions.push_back({i, j});
                } else if (grid[i][j] == maxVal) {
                    positions.push_back({i, j});
                }
            }
        }

        bool canCover = false;

        for (int row = 0; row < n; ++row) {
            set<int> cols;
            for (auto pos : positions) {
                if (pos.first != row) {
                    cols.insert(pos.second);
                }
            }
            if (cols.size() <= 1) {
                canCover = true;
                break;
            }
        }

        if (canCover) {
            cout << maxVal - 1 << endl;
        } else {
            cout << maxVal << endl;
        }
    }

    return 0;
}
