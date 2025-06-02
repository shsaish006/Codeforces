#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        if (r == 1)
            cout << r << " " << c << "\n";
        else if (r % 2 != 0 || c % 2 != 0)
            cout << (r / 2) + 1 << " " << (c / 2) + 1 << "\n";
        else
            cout << r - 1 << " " << 2 << "\n";
    }

    return 0;
}
