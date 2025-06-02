#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int answer[n];

    for (int i = 1; i <= n; ++i) {
        int position;
        cin >> position;
        answer[position - 1] = i;
    }

    for (int i = 0; i < n; ++i) {
        cout << answer[i] << " ";
    }
    cout << endl;

    return 0;
}
