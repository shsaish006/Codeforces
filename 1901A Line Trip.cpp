#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<long long> arr;
        arr.push_back(0);
        for (int i = 0; i < n; i++) {
            long long point;
            cin >> point;
            arr.push_back(point);
        }
        arr.push_back(x);
        n = arr.size();
        long long maxi = LLONG_MIN;
        for (int i = 1; i < n; i++) {
            if (i == n - 1) {
                maxi = max(maxi, 2 * (arr[i] - arr[i - 1]));
            } else {
                maxi = max(maxi, arr[i] - arr[i - 1]);
            }
        }
        cout << maxi << endl;
    }
    return 0;
}