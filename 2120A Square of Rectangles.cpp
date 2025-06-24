#include <bits/stdc++.h>
using namespace std;

void sai() {
    int t;
    cin >> t;
    while (t--) {
        vector<pair<int, int>> v(3);
        for (int i = 0; i < 3; i++) {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.rbegin(), v.rend());

        int a = v[0].first, b = v[0].second;
        int c = v[1].first, d = v[1].second;
        int e = v[2].first, f = v[2].second;

        bool ok = false;

        if (b == d && d == f && a + c + e == b) ok = true;
        if (a == c && c == e && b + d + f == a) ok = true;
        if (b == d + f && c == e && a + c == b) ok = true;
        if (a == c + e && d == f && b + d == a) ok = true;

        cout << (ok ? "YES" : "NO") << '\n';
    }
}

int main() {
    sai();
    return 0;
}
