#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a;
    cin >> a;
 
    while (a--) {
        long long b, c, d, e;
        cin >> b >> c >> d >> e;
 
        if (c <= b && c <= d) {
            cout << "Gellyfish" << endl;
        } else if (b < e) {
            cout << "Flower" << endl;
        } else if (e <= d) {
            cout << "Gellyfish" << endl;
        } else {
            cout << "Flower" << endl;
        }
    }
 
    return 0;
}