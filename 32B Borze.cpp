#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    int b = 0;

    while (b < a.size()) {
        if (a[b] == '.') cout << "0";
        else if (a[b] == '-' && a[b + 1] == '.') { cout << "1"; ++b; }
        else if (a[b] == '-' && a[b + 1] == '-') { cout << "2"; ++b; }
        ++b;
    }

    return 0;
}
