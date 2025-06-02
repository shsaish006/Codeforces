#include <bits/stdc++.h>
using namespace std;
 
bool isEven(int n) {
    return !(n & 1);
}
 
void solve(int arr[], int size) {
    int l = 0;
    int r = size - 1;
 
    int l1 = l;
    int r1 = r;
    while (l1 <= r && isEven(arr[l1]) != isEven(arr[r1])) {
        l1++;
    }
 
    int l2 = l;
    int r2 = r;
    while (r2 >= l && isEven(arr[l2]) != isEven(arr[r2])) {
        r2--;
    }
 
    int ans = min(l1 - l, r - r2);
    cout << ans << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + x);
        solve(arr, x);
    }
} 

