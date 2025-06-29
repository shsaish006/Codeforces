#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b, c = 0, d = 0;
        cin >> b;
        for (int i = 0; i < b; ++i) {
            int e, f;
            cin >> e >> f;
            c = max(c, e);
            d = max(d, f);
        }
        cout << 2 * (c + d) << endl;
    }
    return 0;
}
