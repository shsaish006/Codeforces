#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    int b[a], c[a];
    int d = 0;

    for (int e = 0; e < a; e++) {
        cin >> b[e] >> c[e];
    }

    for (int e = 0; e < a; e++) {
        for (int f = 0; f < a; f++) {
            if (b[e] == c[f]) {
                d++;
            }
        }
    }

    cout << d << endl;
    return 0;
}
