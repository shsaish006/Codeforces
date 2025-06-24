#include <iostream>
using ll = long long;

void solve() {
    ll w, h, a, b;
    std::cin >> w >> h >> a >> b;

    ll x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    bool h_partition_possible = false;
    if ((y1 - y2) % b == 0) {
        if (y1 == y2) {
            if ((x1 - x2) % a == 0) {
                h_partition_possible = true;
            }
        } else {
            h_partition_possible = true;
        }
    }

    bool v_partition_possible = false;
    if ((x1 - x2) % a == 0) {
        if (x1 == x2) {
            if ((y1 - y2) % b == 0) {
                v_partition_possible = true;
            }
        } else {
            v_partition_possible = true;
        }
    }

    if (h_partition_possible || v_partition_possible) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
509A