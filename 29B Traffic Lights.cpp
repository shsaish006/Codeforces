#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l, d, v, g, r;
    cin >> l >> d >> v >> g >> r;

    double a = 1.0 * d / v;
    double b = 1.0 * (l - d) / v;

    long long u = a / (g + r);
    double c = a - u * (g + r);

    if (c >= g) {
        a = (u + 1) * (g + r);
    }

    printf("%.7lf\n", a + b);

    return 0;
}
