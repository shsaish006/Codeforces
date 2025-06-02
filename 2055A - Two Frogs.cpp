#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int diff = abs(a - b);
        cout << (diff % 2 == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}