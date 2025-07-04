#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0, y = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int val;
            cin >> val;
            if (val == 1) {
                x = i;
                y = j;
            }
        }
    }
    int moves = abs(x - 2) + abs(y - 2);
    cout << moves << endl;
    return 0;
}
