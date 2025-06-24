#include <bits/stdc++.h>
using namespace std;

void sai() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int z = 0;

        for (int i = 0; i < a; i++) {
            int c, d, e, f;
            cin >> c >> d >> e >> f;

            if ((c == d && e == f) || (c != d && e + f == b)) {
                z++;
            }
        }

        cout << z << '\n';
    }
}

int main() {
    sai();
    return 0;
}
