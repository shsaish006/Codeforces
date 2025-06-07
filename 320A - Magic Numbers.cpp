#include <bits/stdc++.h>
using namespace std;

bool isMN(string s) {
    for (size_t i = 0; i < s.size(); ) {
        if (s.substr(i, 3) == "144") {
            i += 3;
        } else if (s.substr(i, 2) == "14") {
            i += 2;
        } else if (s[i] == '1') {
            i += 1;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    if (isMN(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
  