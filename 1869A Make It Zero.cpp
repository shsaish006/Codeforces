// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     int total_x_s=0;
//     bool all_zeros=true;
//     for(int i=0;i<n;++i){
//         cin>>a[i];
//         total_x_s^=a[i];
//         if(a[i]!=0){
//             all_zeros=false;
//         }
//     }
//     if(all_zeros){
//         cout<<0<<endl;
//         return;
//     }
//     if(total_x_s==0){
//         cout<<1<<endl;
//         cout<<1<<" "<<n<<endl;
//     }else{
//         if(n%2==1){
//             cout<<3<<endl;
//             cout<<1<<" "<<n<<endl;
//             cout<<1<<" "<<n-1<<endl;
//             cout<<1<<" "<<n<<endl;
//         }else{
//             cout<<2<<endl;
//             cout<<1<<" "<<n<<endl;
//             cout<<1<<" "<<n<<endl;
//         }
//     }
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//         return 0;
//     }
// }

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int b_dummy; 
    for (int i = 0; i < n; ++i) {
        cin >> b_dummy;
    }

    if (n % 2 == 0) {
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    } else {
        cout << 4 << endl;
        cout << 1 << " " << n << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << 2 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}