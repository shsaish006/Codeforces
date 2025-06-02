// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>a(n);
//         for(int i=0;i<n;++i){
//             cin>>a[i];
//         }
//         int max_val=*max_element(a.begin(),a.end());
//         int min_val=*min_element(a.begin(),a.end());
//         cout<<4*(max_val-min_val)<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
 
    sort(a.begin(), a.end());
    cout << abs(a[1-1]-a[n-1-1])+abs(a[1]-a[n-1-1])+abs(a[1]-a[n-1])+abs(a[n-1]-a[1-1]);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}
