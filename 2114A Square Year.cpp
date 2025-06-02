#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        long long year = stoll(s);
        long long root = (long long) sqrt(year);
        bool found = false;

        for (long long total = 0; total <= root + 1; total++) {
            if (total * total == year) {
                for (long long a = 0; a <= total; a++) {
                    long long b = total - a;
                    cout << a << " " << b << endl;
                    found = true;
                    break;
                }
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
