#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0) {
            cout << 0 << endl;
            continue;
        }
        int s1 = (y + 1) / 2;
        int s2 = (x + 4 * y + 14) / 15;
        int res = max(s1, s2);
        cout << res << endl;
    }
    return 0;
}