#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int s, n;
    cin >> s >> n;
 
    vector<pair<int, int>> dragons(n);
 
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].first >> dragons[i].second;  // xi, yi
    }
 
    sort(dragons.begin(), dragons.end());
 
    for (int i = 0; i < n; ++i) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
 
    cout << "YES" << endl;
    return 0;
}