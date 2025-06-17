#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b, c;
        cin >> b >> c;
        vector<int> d(b);
        for (int i = 0; i < b; ++i) {
            cin >> d[i];
        }
        int e = *min_element(d.begin(), d.end());
        int f = *max_element(d.begin(), d.end());
        int g = (f - e) + min(abs(c - e), abs(c - f));
        cout << g << endl;
    }
    return 0;
}
