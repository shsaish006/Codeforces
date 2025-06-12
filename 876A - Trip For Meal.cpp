#include <iostream>
#include <algorithm>
using namespace std;

void sai() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    int steps = n - 1;
    int dist = 0;
    char at = 'R';

    while (steps--) {
        int toO = (at == 'R') ? a : (at == 'E' ? c : a);
        int toE = (at == 'R') ? b : (at == 'O' ? c : b);

        if (toO <= toE) {
            dist += toO;
            at = (at == 'R') ? 'O' : (at == 'E' ? 'O' : 'R');
        } else {
            dist += toE;
            at = (at == 'R') ? 'E' : (at == 'O' ? 'E' : 'R');
        }
    }

    cout << dist << endl;
}

int main() {
    sai();
    return 0;
}
