#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cin >> n >> l;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int p = a[l-1],count = 0;
    for (int i = 0; i < n; i++){
        if (p == 0) {
            if (a[i] > 0) {
                count++;
            }
        }
        else if (a[i] >= p) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}