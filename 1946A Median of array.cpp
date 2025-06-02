#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int div=((n+1)/2)-1;
    int cnt=0;
    for(int i=div;i<n;i++){
        if(arr[i]==arr[div]) cnt++;        
    }
    cout<<cnt<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}