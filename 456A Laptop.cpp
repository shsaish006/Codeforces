#include <bits/stdc++.h>
using namespace std;

int n;
pair<int, int> a[1000005];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n; i++) {
        if (a[i].second > a[i + 1].second) {
            cout << "Happy Alex\n";
            return 0;
        }
    }
    cout << "Poor Alex";
    return 0;
}
