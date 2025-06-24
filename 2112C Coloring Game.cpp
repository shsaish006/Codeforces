#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;

        vector<int> c(b);
        for (int i = 0; i < b; i++) {
            cin >> c[i];
        }

        sort(c.begin(), c.end());

        int d = c.back();  // largest element
        long long e = 0;   // final answer

        for (int f = 2; f < b; f++) {
            int g = 2 * c[f];
            int h = (f != b - 1) ? d : c[b - 2];
            int i = max(g, h) - c[f];

            int j = 0, k = f - 1;
            while (j < k) {
                if (c[j] + c[k] > i) {
                    e += (k - j);
                    k--;
                } else {
                    j++;
                }
            }
        }

        cout << e << '\n';
    }

    return 0;
}
