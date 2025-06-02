#include <iostream>
#include <string>
#include <numeric>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int count0 = 0;
    int count1 = 0;
    for (char c : s) {
        if (c == '0') {
            count0++;
        } else {
            count1++;
        }
    }

    int num_diff_pairs_needed = n / 2 - k;

    if (count0 < num_diff_pairs_needed || count1 < num_diff_pairs_needed) {
        cout << "NO\n";
        return;
    }

    if ((count0 - num_diff_pairs_needed) % 2 != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
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