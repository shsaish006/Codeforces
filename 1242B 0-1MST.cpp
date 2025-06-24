#include <bits/stdc++.h>
using namespace std;

const int a = 1e6 + 10;
int b, c;
int d[a], e[a];
vector<int> f[a];

int g(int x) {
    if (x == d[x]) return x;
    return d[x] = g(d[x]);
}

void h(int x, int y) {
    x = g(x);
    y = g(y);
    if (x == y) return;
    if (e[x] < e[y]) swap(x, y);
    d[y] = x;
    e[x] += e[y];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> b >> c;

    for (int i = 1; i <= c; i++) {
        int x, y;
        cin >> x >> y;
        f[x].push_back(y);
        f[y].push_back(x);
    }

    int minNode = 1;
    for (int i = 2; i <= b; i++) {
        if (f[i].size() < f[minNode].size()) {
            minNode = i;
        }
    }

    for (int i = 1; i <= b; i++) d[i] = minNode;
    for (int x : f[minNode]) {
        d[x] = x;
        e[x] = 1;
    }
    e[minNode] = b - f[minNode].size();

    vector<int> mark(b + 1, 0);
    for (int x : f[minNode]) {
        for (int y : f[x]) mark[y] = 1;
        for (int i = 1; i <= b; i++) {
            if (!mark[i]) {
                h(x, i);
            }
        }
        for (int y : f[x]) mark[y] = 0;
    }

    int count = 0;
    for (int i = 1; i <= b; i++) {
        if (g(i) == i) count++;
    }

    cout << count - 1 << '\n';
    return 0;
}
