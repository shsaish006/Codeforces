#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
   int n,k;
   cin >> n >> k;
   if(n%2==0) {
    if(k<=(n/2)) {
        cout << (2*k)-1 << endl;
    }
    else {
        cout << 2*(k-(n/2)) << endl;
    }
   }
   else {
    int a=(n/2)+1;
    if(k<=a) {
        cout <<(2*k)-1 << endl;
    }
    else {
        cout << 2*(k-a) << endl;
    }
   }
    return 0;
}