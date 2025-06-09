#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        vector<int> b(a);
        for (int i = 0; i < a; i++) {
            cin >> b[i];
        }

        vector<int> c(a + 1, 0);
        for (int i = 0; i < a; i++) {
            c[b[i]]++;
        }

        vector<int> d(a + 1, 0);
        vector<int> e(a + 1, 0);
        vector<int> f;
        int g = 0, h = 0, sai = 0;

        for (int i = 0; i < a; i++) {
            int j = b[i];
            if (e[j]) {
                e[j] = 0;
                h--;
            }

            c[j]--;
            if (d[j]) {
                if (c[j] == 0) {
                    g++;
                }
            } else {
                d[j] = 1;
                f.push_back(j);
                if (c[j] == 0) {
                    g++;
                }
            }

            if (h == 0 && g == 0) {
                sai++;
                for (int k : f) {
                    e[k] = 1;
                }
                h = f.size();
                for (int k : f) {
                    d[k] = 0;
                }
                f.clear();
                g = 0;
            }
        }

        sai++;
        cout << sai << "\n";
    }
    return 0;
}
