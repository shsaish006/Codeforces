#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    uint32_t n;
    cin >> n;

    uint64_t a;
    forn(i, n) {
        cin >> a;
        if (a < 3)
            cout << 0 << '\n';
        else
            cout << (a - 1) / 2 << '\n';
    }

    return 0;
}
