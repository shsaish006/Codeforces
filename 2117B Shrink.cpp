#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        arr[0] = 1;
        arr[n - 1] = 2;
        for (int i = 1; i < n - 1; i++) {
            arr[i] = i + 2;
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
