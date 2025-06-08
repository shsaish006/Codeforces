#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    if (m % n != 0) {
        cout << -1 << '\n';
        return 0;
    }

    long long x = m / n, count = 0;
    while (x % 2 == 0) x /= 2, count++;
    while (x % 3 == 0) x /= 3, count++;

    if (x == 1)
        cout << count << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
