#include <iostream>
using namespace std;

void sai() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        if (b % 4 == 0) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }
}

int main() {
    sai();
    return 0;
}
