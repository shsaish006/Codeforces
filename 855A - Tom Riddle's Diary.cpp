#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    set<string> lists;
    while (t--) {
        string name;
        cin >> name;

        if (lists.find(name) != lists.end()) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
            lists.insert(name);
        }
    }

    return 0;
}
