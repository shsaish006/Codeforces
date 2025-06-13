#include <iostream>
using namespace std;
 
void sai() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        cout << 2 * b - 1 << endl;
        for (int c = 1; c <= b; ++c) {
            cout << c << " " << 1 << " " << c << endl;
            if (c + 1 <= b) {
                cout << c << " " << c + 1 << " " << b << endl;
            }
        }
    }
}
 
int main() {
    sai();
    return 0;
}
