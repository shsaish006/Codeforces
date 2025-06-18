#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int c;
        char d;
        cin >> c >> d;
        string e;
        cin >> e;
        bool f = false;
        string g;

        for (char h : e) {
            if (!f && h < d) {
                g += d;
                f = true;
            }
            g += h;
        }

        if (!f) {
            g += d;
        }

        cout << g << endl;
    }
    return 0;
}
