#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        bool sameRegion = (x1 > y1) == (x2 > y2);
        cout << (sameRegion ? "YES" : "NO") << '\n';
    }
    return 0;
}