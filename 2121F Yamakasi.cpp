#include <bits/stdc++.h>
using namespace std;

int a(const vector<int>& b, int c) {
    unordered_map<long long, int> d;
    d[0] = 1;
    long long e = 0;
    int f = 0;
    for (int g : b) {
        e += g;
        f += d[e - c];
        d[e]++;
    }
    return f;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b;
    cin >> b;
    while (b--) {
        int c, d, e;
        cin >> c >> d >> e;
        vector<int> f(c);
        for (int i = 0; i < c; ++i) {
            cin >> f[i];
        }

        long long g = 0;
        vector<int> h;
        for (int i = 0; i <= c; ++i) {
            if (i == c || f[i] > e) {
                if (!h.empty()) {
                    g += a(h, d);
                    vector<int> j;
                    for (int k : h) {
                        if (k == e) {
                            if (!j.empty()) {
                                g -= a(j, d);
                                j.clear();
                            }
                        } else {
                            j.push_back(k);
                        }
                    }
                    if (!j.empty()) {
                        g -= a(j, d);
                    }
                    h.clear();
                }
            } else {
                h.push_back(f[i]);
            }
        }
        cout << g << '\n';
    }

    return 0;
}
