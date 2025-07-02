#include <bits/stdc++.h>
using namespace std;

void a() {
    int b;
    cin >> b;
    while (b--) {
        int c, d, e;
        cin >> c >> d >> e;
        vector<int> f(c);
        for (int g = 0; g < c; ++g) {
            cin >> f[g];
        }

        if (e > 1) {
            cout << "YES" << endl;
        } else {
            if (f[d - 1] == *max_element(f.begin(), f.end())) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    a();
    return 0;
}
