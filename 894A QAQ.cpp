#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long q = 0, qa = 0, qaq = 0;

    for (char ch : s) {
        if (ch == 'Q') {
            q++;
            qaq += qa;
        } else if (ch == 'A') {
            qa += q;
        }
    }

    cout << qaq << endl;
    return 0;
}
