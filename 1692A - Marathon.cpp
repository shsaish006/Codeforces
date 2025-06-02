#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cctype> // Required for isspace

using namespace std; // Using namespace std as requested

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        int count = 0;
        int num;
        char next_char = cin.peek();
        while (next_char != '\n' && next_char != EOF) {
            cin >> num;
            if (num > a) {
                count++;
            }
            next_char = cin.peek();
            if (isspace(next_char) && next_char != '\n') {
                cin.ignore();
                next_char = cin.peek();
            }
        }
        cout << count << endl;
    }
    return 0;
}