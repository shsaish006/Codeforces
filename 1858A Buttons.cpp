#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
            cout << (c % 2 == 0 ? "Second" : "First") << endl;
        else
            cout << (a > b ? "First" : "Second") << endl;
    }
    return 0;
}
