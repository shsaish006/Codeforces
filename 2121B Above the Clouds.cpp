#include <bits/stdc++.h>
using namespace std;

void check_valid() {
    int a;
    cin >> a;
    string b;
    cin >> b;
    vector<int> c(26, 0);
    for (char d : b) {
        c[d - 'a']++;
    }
    for (int e = 1; e < a - 1; ++e) {
        int f = b[e] - 'a';
        if (c[f] > 1) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main() {
    int g;
    cin >> g;
    while (g--) {
        check_valid();
    }
    return 0;
}
